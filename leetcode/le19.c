#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
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
    struct ListNode *l1=head,**l2=&head;
    while(--n>=0&&l1!=NULL)
    {
        l1=l1->next;
    }
    while(l1!=NULL)
    {
        l2=&((*l2)->next);
        l1=l1->next;
    }
    if(*l2==head)
    {
        return head->next;
    }
    else
    {
        *l2=(*l2)->next;
        return head;
    }
}
int main(int argc,char* argv[])
{
	int i;
	struct ListNode *list ,*pre,*l1;
	struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
	pre=list=head;
	for(i=0;i<5;i++)
	{
		if(list!=head)
		{	
			list = (struct ListNode *)malloc(sizeof(struct ListNode));
			pre->next=list;
		}
		list->val=i+1;
		pre=list;
		list=list->next;
	}
	list=NULL;
	l1=removeNthFromEnd(head,atoi(argv[1]));	
	while(l1!=NULL)
	{
		printf("%d\n",l1->val);
		l1=l1->next;
	}
	return 0;
}
