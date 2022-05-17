#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* f = head;

        while(head) {
            while(head->next && head->val == head->next->val) {
                head->next = head->next->next;
            }
            head = head->next;
        }
        return f;
    }
};

void createList(ListNode *L, int n)
{
    ListNode *tmp;
    for(int i=0; i<n; i++) {
        tmp = new ListNode();
        L->val = tmp->val = i;
        L->next = tmp;
        L = L->next;

        tmp = new ListNode();
        L->val = tmp->val = i;
        L->next = tmp;
        L = L->next;
    }
}

int main() {
    int n = 3;
    ListNode *L, *L2, *L3, *h1, *h2;
    L = new ListNode();
    L2 = new ListNode();
    h1 = L;
    h2 = L2;
    createList(L, n);

    while(L->next != nullptr) {
        cout << L->val << endl;
        L = L->next;
    }

    cout << "result" << endl;


    Solution* sol;
    L3 = sol->deleteDuplicates(h1);

    while(L3) {
        cout << L3->val << endl;
        L3 = L3->next;
    }
    return 0;
}
