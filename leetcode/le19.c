#include <stdio.h>

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
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	struct ListNode *l1,*l2;
	l1=l2=head;
	int i =n
	for(;l2!=NULL&&i!=0;l2=l2->next,i--)
	{
		l1=l1->next;		
	}
	if(l1==head)
	{
		head=head->next;
		free(l1);
	}
	else
	{
		
	}
}
