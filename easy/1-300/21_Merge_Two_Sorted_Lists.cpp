#include<iostream>

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *node, *ln;
        ln = new ListNode();
        node = ln;

        while(list1 && list2) {
            if(list1->val < list2->val) {
                node->next = list1;
                list1 = list1->next;
            } else {
                node->next = list2;
                list2 = list2->next;
            }
            node = node->next;
        }

        if(list1) {
            node->next = list1;
        }
        if(list2) {
            node->next = list2;
        }

        return ln->next;
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
    }
}

void createList2(ListNode *L, int n)
{
    ListNode *tmp;
    for(int i=1; i<n; i+=2) {
        tmp = new ListNode();
        L->val = tmp->val = i;
        L->next = tmp;
        L = L->next;
    }
}

int main()
{
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

    n = 6;
    createList2(L2, n);
    while(L2->next != nullptr) {
        cout << L2->val << endl;
        L2 = L2->next;
    }

    cout << "result" << endl;

    Solution sol;
    L3 = sol.mergeTwoLists(h1, h2);

    while(L3->next != nullptr) {
        cout << L3->val << endl;
        L3 = L3->next;
    }
    return 0;
}
