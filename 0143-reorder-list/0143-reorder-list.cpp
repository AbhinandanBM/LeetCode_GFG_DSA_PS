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
    void reorderList(ListNode* head) {
//         storing in the array
        vector<int> arr;
        ListNode *temp=head;
        
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        
        int left=0,right=arr.size()-1;
        temp=head;
        
        while(left<=right && temp){
            temp->val=arr[left++];
            temp=temp->next;
            if(temp){
            temp->val=arr[right--];
            temp=temp->next;
            }
        }
    }
};