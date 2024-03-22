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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy=new ListNode(0);
        ListNode *dhead=dummy;
        ListNode *head1=list1,*head2=list2;
        
        while(head1 && head2){
            if(head1->val<=head2->val){
                dummy->next=head1;
                head1=head1->next;
                dummy=dummy->next;
                dummy->next=NULL;
            }
            else if(head2->val<head1->val){
                dummy->next=head2;
                head2=head2->next;
                dummy=dummy->next;
                dummy->next=NULL;
            }
        }
        
        if(head1){
            dummy->next=head1;
        }
        if(head2){
            dummy->next=head2;
        }
        return dhead->next;
    }
};