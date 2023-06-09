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
    ListNode *reverseLL(ListNode *head){
        ListNode *curr=head;
        ListNode *newHead=NULL;
        while(curr!=NULL)
        {
            ListNode *next=curr->next;
            curr->next=newHead;
            newHead=curr;
            curr=next;
        }
        return newHead;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
          return true;

        ListNode *slow=head;  //Middle of Linked List
        ListNode *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }  
        slow->next=reverseLL(slow->next); //reverse from right of slow
        slow=slow->next;

        while(slow!=NULL)
        {
            if(head->val !=slow->val)
               return false;

            head=head->next;
            slow=slow->next;   
        }
        return true;
    }
};
