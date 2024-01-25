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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp=head;
        vector<int> arr;
        
//         storing into the array
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        
//         Reversing the linked list from array
        int i=arr.size()-1;
        temp=head;
        while(temp){
            temp->val=arr[i];
            i--;
            temp=temp->next;
        }
        
        return head;
        
    }
};