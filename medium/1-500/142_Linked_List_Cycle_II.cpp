/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next ;
            fast = fast->next->next;

            if (slow == fast) {
                ListNode* node1 = fast;
                ListNode* node2 = head;
                while (node1 != node2) {
                    node1 = node1->next;
                    node2 = node2->next;
                }
                return node1;
            }
        }

        return NULL;
    }
};
