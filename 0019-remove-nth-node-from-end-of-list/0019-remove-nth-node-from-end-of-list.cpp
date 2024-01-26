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
        ListNode *temp=head;
        int count=0;
        
//         count the number of nodes
        while(temp){
            count++;
            temp=temp->next;
        }
        
        count-=n;
//         if the delted node is first node
        if(count==0){
            ListNode *curr=head;
            head=head->next;
            delete curr;
            return head;
        }
        
//         other than first node
        ListNode *curr=head,*prev=NULL;
        while(count--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;
        return head;
    }
};