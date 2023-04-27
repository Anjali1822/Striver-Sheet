/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy=new ListNode();// created a dummy node 
        dummy->next=head;//point to head
        
        ListNode *slow=dummy;//start at dummy
        ListNode *fast=dummy;//fast at dummy

        for(int i=0;i<n;i++)
        {
            fast=fast->next;
        }

        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return dummy->next;
    }
};
