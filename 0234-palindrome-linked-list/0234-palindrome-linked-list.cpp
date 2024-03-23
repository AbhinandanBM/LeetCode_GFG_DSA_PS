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
    ListNode* reverseNode(ListNode* head){
        ListNode *prev=NULL,*curr=head,*fut=NULL;
        
        while(curr){
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return true;
        
        ListNode *fast=head,*slow=head,*prev=NULL;
        
        while(fast && fast->next){
            fast=fast->next->next;
            
            prev=slow;
            slow=slow->next;
            
        }
        
        prev->next=NULL;
        ListNode *tail=reverseNode(slow);
        
        while(head && tail){
            if(head->val!=tail->val)
                return false;
            
            head=head->next;
            tail=tail->next;
        }
        return true;
    }
};