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
    ListNode* middleNode(ListNode* head) {
        unordered_map<int, ListNode*> mp;
        int cnt = 0, index = 0;
        while(head != NULL) {
            mp[cnt] = head;
            cout << head->val << endl;
            cnt++;
            head = head->next;
        }

        if(cnt > 1) index = cnt / 2;
        return mp[index];
    }
};

int main()
{
    int num = 6;
    ListNode *L, *h1;
    L = new ListNode();
    h1 = L;
    createList(L, num);
    Solution *sol;
    ListNode *n = sol->middleNode(h1->next);
    cout << "---" << endl;
    while(n != nullptr) {
        cout << n->val << endl;
        n = n->next;
    }

    return 0;
}
