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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr) return true;  // Handle empty list

        int count = 0;
        ListNode *temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }

        if(count==1)
            return 1;
        
        count /= 2;
        ListNode *curr = head, *prev = nullptr;
        while (count--) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = nullptr;  // Disconnect second half

        // Reverse second half
        ListNode *front = nullptr, *new_tail = curr;
        while (curr) {
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }

        // Compare first and second halves, skipping middle node if odd
        ListNode *head1 = head, *head2 = prev;
        if (count % 2 == 1) head1 = head1->next;  // Skip middle node for odd-length

        while (head1 && head2) {
            if (head1->val != head2->val) return false;
            head1 = head1->next;
            head2 = head2->next;
        }

        return true;
    }
};
