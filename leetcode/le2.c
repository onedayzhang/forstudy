#include <stdio.h>
#include <malloc.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

	struct ListNode *head=NULL;
	struct ListNode *tmp=NULL;
	int carry=0;
	int l1_value=0;
	int l2_value=0;
	while(l1!=NULL || l2!=NULL)
	{
		if(l1!=NULL)
		{
			l1_value=l1->val;
			l1=l1->next;
		}
		if(l2!=NULL)
		{
			l2_value=l2->val;
			l2=l2->next;
		}
		if(head==NULL)
		{
			head=tmp=(struct ListNode*)malloc(sizeof(struct ListNode));
		}
		else
		{
			tmp->next=(struct ListNode*)malloc(sizeof(struct ListNode));
			tmp=tmp->next;
		}
		tmp->val=(l1_value+l2_value+carry)%10;
		carry=(l1_value+l2_value+carry)/10;
		tmp->next=NULL;
		l1_value=0;
		l2_value=0;
	}
	if(carry!=0)
	{
		tmp->next=(struct ListNode*)malloc(sizeof(struct ListNode));
		tmp=tmp->next;
		tmp->val=carry;
		tmp->next=NULL;
	}
	return head;
}

int main()
{
	struct ListNode L1,L2,L3; 
    L1.val=7;
	L2.val=0;
	L3.val=4;
	L1.next=&L2;
	L2.next=&L3;
	L3.next=NULL;
	struct ListNode L4,L5,L6;
	L4.val=4;
	L5.val=1;
	L6.val=6;
	L4.next=&L5;
	L5.next=&L6;
	L6.next=NULL;
    struct ListNode* L7;
	L7=addTwoNumbers(&L1,&L4);
	while(L7!=NULL)
	{
		printf("%d\n",L7->val);
		L7=L7->next;
	}
	return 0;
}
