#include <stream>

using namespace std
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
}
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1==l2) return l1;
    if(!l1) return l2;
    if(!l2) return l1;
    if(l1->val>l2->val) return mergeTwoLists(l2, l1);
    ListNode* newl2 = new ListNode(0); newl2->next = l2;
    ListNode* p1 = l1;
    while (p1->next && newl2->next) {
        if (p1->next->val<newl2->next->val) {
            p1 = p1->next;
        } else {
            ListNode* temp = p1->next;
            p1->next = newl2->next;
            newl2->next = newl2->next->next;
            p1->next->next = temp;
            p1 = p1->next;
        }
    }
    if(!p1->next) p1->next = newl2->next;
    delete newl2;
    return l1;
}

ListNode* domerge(vector<ListNode*>& lists,int left,int right)
{
	if(left==right) return lists[left];
	if(left+1==right) return mergeTwoLists(lists[left],lists[right]);
	ListNode* l1=domerge(lists,left,(left+right)/2);
	ListNode* l2=domerge(lists,(left+right)/2+1,right);
	return mergeTwoLists(l1,l2);
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

int main()
{
	
}
