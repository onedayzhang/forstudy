/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||k==1) return head;
		ListNode *cur,*next,*pre;
		ListNode *prehead=new ListNode(-1);
		prehead->next=head;
		pre=prehead;
        cur=prehead;
		int num=0;
		while(cur = cur->next) num++;
		while(num>=k)
		{
			cur=pre->next;
			next=cur->next;
			for(int i=1;i<k;i++)
			{
				cur->next=next->next;
				next->next=pre->next;
				pre->next=next;
				next=cur->next;
			}
			pre=cur;
			num-=k;
		}
		return prehead->next;
    }
};
