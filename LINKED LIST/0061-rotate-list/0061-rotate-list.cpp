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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0) {
            // Edge cases: empty list, single-node list, or k = 0 (no rotation needed)
            return head;
        }

        int count = 1;
        ListNode *tail = head;
        while (tail->next != NULL) {
            count++;
            tail = tail->next;
        }

        k = k % count;  // Adjust k to be within the list's length
        if (k == 0) {
            // No rotation needed
            return head;
        }

        ListNode *curr = head, *prev = NULL;
        for (int i = 0; i < count - k; i++) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;
        tail->next = head;
        head = curr;

        return head;
    }
};