#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <algorithm>
#include <deque>
#include <stack>
#include <cmath>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void createList(ListNode *L, int n)
{
    ListNode *tmp;
    for(int i = 1; i <= n; i++) {
        tmp = new ListNode();
        tmp->val = i;
        L->next = tmp;
        L = L->next;
    }
}

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode *h = head;
        unordered_map<int, ListNode*> mp;
        while(head != nullptr) {
            mp[cnt] = head;
            cnt++;
            head = head->next;
        }
        cnt = cnt - n;
        if(cnt >= 1) {
            mp[cnt - 1]->next = mp[cnt]->next;
        } else {
            h = h->next;
        }
        return h;
    }
};

int main()
{
    int num = 5;
    int n = 2;
    ListNode *L, *h1;
    L = new ListNode();
    h1 = L;
    createList(L, num);
    Solution *sol;
    ListNode *node = sol->removeNthFromEnd(h1->next, n);
    while(node != nullptr) {
        cout << node->val << endl;
        node = node->next;
    }

    return 0;
}

/* brilliant idea
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;

		// move fast pointer to the n + 1 element
        while (n--) { fast = fast->next; }

        // handle edge case: given n is always valid,
        // if fast reached the end, we need to remove the first element
        if (fast == nullptr) return head->next;

        // move both pointers at the same time maintaing the difference
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // slow will be pointing to the element before the one we want to remove
        slow->next = slow->next->next;

        return head;
    }
}
*/
