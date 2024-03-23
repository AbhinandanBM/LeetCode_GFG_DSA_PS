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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *temp=list1,*temp1,*temp2;
        int count=0;
        
        while(temp){
            if(count==a-1)
                temp1=temp;
            if(count==b)
                temp2=temp->next;
            
            count++;
            temp=temp->next;
        }
        
        temp1->next=list2;
        temp=list2;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=temp2;
        
        return list1;
    }
};