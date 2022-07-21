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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;
        ListNode *begin = new ListNode(0);
        begin->next = head;
        int cnt = 0;
        // p1 记录左起始翻转节点的上一个节点
        // left1 记录左起始翻转节点
        ListNode *p1 = NULL, *left1 = NULL;
        ListNode *pre = begin;
        while(head) {
            cnt++;

            if(cnt == left) {
                left1 = head;
                p1 = pre;
            }

            if(cnt > left && cnt < right) {
                ListNode *tmp = head->next;
                head->next = pre;
                pre = head;
                head = tmp;
                continue;
            }

            if(cnt == right) {
                left1->next = head->next;
                p1->next = head;
                head->next = pre;
                break;
            }

            head = head->next;
            pre = pre->next;

        }
        return begin->next;
    }
};
