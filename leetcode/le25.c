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
		ListNode* cur,next;
		ListNode *pre=new ListNode(-1);
		pre->next=head;
		cur=head;
		int num=0;
		while(cur=cur->next) num++;
		while(num>=k)
		{
			
		}
		
    }
};
