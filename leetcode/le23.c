
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	if(l1==NULL&&l2==NULL)	return NULL;
	if(l1==NULL) return l2;
	if(l2==NULL) return l1;
	struct ListNode *head=NULL,*cur=NULL;
	if(l1->val>l2->val)
	{
		head=l2;
		l2=l2->next;
	}
	else
	{
		head=l1;
		l1=l1->next;
	}
	cur=head;
	while(l1!=NULL&&l2!=NULL)
	{
		if(l1->val>l2->val)
		{
			cur->next=l2;
			l2=l2->next;
		}
		else
		{
			cur->next=l1;
			l1=l1->next;
		}
		cur=cur->next;
	}
	if(l1!=NULL)
		cur->next=l1;
	if(l2!=NULL)
		cur->next=l2;
	return head;
}

/*tion for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    
}

ListNode* domerge(vector<ListNode*>& lists,int left,int right)
{
	if(left==right) return lists[left];
	if(left+1=right) mergeTwoLists(lists[left],lists[right])
	ListNode* l1=domerge(lists,0,left+right/2);
	ListNode* l2=domerge(lists,left+right/2+1,right);
	mergeTwoLists(l1,l2);
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
		int k=lists.size();
		if(k==0) return NULL;
		if(k==1) return lists[0];
		return domerge(lists,0,k-1);
    }
};
