#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> vec;
        while(head) {
            vec.push_back(head->val);
            head = head->next;
        }
        int len = vec.size();
        int b = len - 1;

        for (int i = 0; i <= len / 2; i++) {
            if (i < b) {
                if(vec[i] != vec[b]) return false;
            }
            b--;
        }

        return true;
    }
};

int main() {
    vector<int> v = {1, 2, 1};
    ListNode *node = new ListNode(v[0]);
    ListNode *head = node;

    for (int i = 1; i < v.size(); i++) {
        ListNode *tmp = new ListNode();
        tmp->val = v[i];
        node->next = tmp;
        node = node->next;
    }

    Solution* sol;
    bool k = sol->isPalindrome(head);

    cout << k << endl;

    return 0;
}
