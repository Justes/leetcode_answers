#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <deque>
#include <stack>
#include <cmath>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* node3 = new ListNode();
        ListNode* head = node3;
        int sum = 0;

        while(l1 || l2) {
            if(l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }

            node3->next = new ListNode(sum % 10);
            node3 = node3->next;
            sum /= 10;
        }

        if(sum) {
            node3->next = new ListNode(sum);
            node3 = node3->next;
        }

        return head->next;
    }
};


int main() {
    //vector<int> num1 = {2, 4, 3};
    //vector<int> num2 = {5, 6, 4};
    vector<int> num1 = {9};
    vector<int> num2 = {1,9,9,9,9,9,9,9,9,9};

    ListNode* node1 = new ListNode;
    ListNode* head1 = node1;
    node1->val = num1[0];

    ListNode* node2 = new ListNode;
    ListNode* head2 = node2;
    node2->val = num2[0];

    for(int i = 1; i < num1.size(); i++) {
        ListNode* tmp = new ListNode;
        tmp->val = num1[i];
        node1->next = tmp;
        node1 = node1->next;

    }

    for(int i = 1; i < num2.size(); i++) {
        ListNode* tmp2 = new ListNode;
        tmp2->val = num2[i];
        node2->next = tmp2;
        node2 = node2->next;
    }

    Solution* sol;
    ListNode* node3 = sol->addTwoNumbers(head1, head2);
    while(node3) {
        cout << node3->val << endl;
        node3 = node3->next;
    }
    /*
    vector<int> nums = {1,2,3,4,5};
    Solution* sol;
    vector<int> k = sol->convert(nums);
    for (auto x : k)
        cout << x << endl;
        */

    return 0;
}
