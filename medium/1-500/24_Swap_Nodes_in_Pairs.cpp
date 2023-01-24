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
    ListNode* swapPairs(ListNode* head) {
        ListNode* pre = new ListNode();
        pre->next = head;
        ListNode* node = pre;
        while(node->next && node->next->next) {
            ListNode* swap1 = node->next;
            ListNode* swap2 = node->next->next;
            node->next = swap2;
            swap1->next = swap2->next;
            swap2->next = swap1;
            node = swap1;
        }
        return pre->next;
    }
};
