#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;


 //Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        bool b = false;

        int i = 0;

        while(head) {
            cout << head->val << endl;
            head = head->next;
            i++;
            if (i == 20) {
                break;
            }
        }


        return b;
    }
};

void createList(ListNode *L, vector<int> n, int pos)
{
    ListNode *tmp;
    ListNode *tail;
    for(int i = 0; i < n.size(); i++) {
        tmp = new ListNode(n[i]);
        if(i == pos) {
            tail = tmp;
            cout << tmp->val << "--ttt-" << endl;
            cout << tail->val << "--ttttttt-" << endl;
        }
        L->next = tmp;
        L = L->next;
    }

    cout << tmp->val << "--aaaaaaa-" << endl;
    cout << tail->val << "---" << endl;
    L->next = tail;
}

int main() {
    int n = 3;
    ListNode *L;
    L = new ListNode(0);
    int pos = 1;

    vector<int> node = {3, 2, 0, -4};

    createList(L, node, pos);

    Solution* sol;
    bool b = sol->hasCycle(L);

    //cout << b <<endl;


    return 0;
}
