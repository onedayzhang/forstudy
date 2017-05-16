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

	struct ListNode *head;
	struct ListNode *tmp;
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
			tmp=tmp->next;
			tmp=(struct ListNode*)malloc(sizeof(struct ListNode));
		}
		tmp->val=(l1_value+l2_value)%10;
		carry=(l1_value+l2_value)/10;
	}
	if(carry!=0)
	{
		tmp=tmp->next;
		tmp=(struct ListNode*)malloc(sizeof(struct ListNode));
		tmp->val=carry;
	}
	return head;
}

int main()
{
	return 0;
}
