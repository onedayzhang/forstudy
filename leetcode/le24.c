/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>

struct ListNode {
	   int val;
	   struct ListNode *next;
};

struct ListNode* swapPairs(struct ListNode* head) {
	struct ListNode *L1,*L2;
	if(head==NULL)
		return head;
	L1=head;
	L2=head->next;
	while(L1!=NULL&&L2!=NULL)
	{
		int value=L1->val;
		L1->val=L2->val;
		L2->val=value;
		L1=L2->next;
		if(L1!=NULL)
			L2=L1->next;
		else
			break;
	}
	return head;
}

struct ListNode* swapPairs_recurse(struct ListNode* head) {
	if(head==NULL||head->next==NULL)
		return head;
	struct ListNode* tmp
	tmp=head->next;
	head=head->next;
	head->next=tmp;
	swapPairs_recurse()
}

int main()
{
	return 0;
}
