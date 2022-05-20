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
		ListNode *fast = head;

		while(head) {
			head = head->next;
			if(fast->next && fast->next->next) {
				fast = fast->next->next;
			} else {
				return false;
			}

			if(head == fast) {
				return true;
			}
		}

		return false;
    }
};

/*
class Solution {
public:
    bool hasCycle(ListNode *head) {
		ListNode *fast = head;
		ListNode *slow = head;
		while(slow && fast && fast->next) {
			slow = slow->next;
			fast = fast->next->next;

			if(slow == fast) {
				return true;
			}
		}

		return false;
    }
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
		if(head == NULL) {
			return false;
		}

		unordered_map<ListNode*, int> m;
		while(head) {
			if(m.count(head) > 0)  {
				return true;
			}
			m[head] = 1;
			head = head->next;
		}

		return false;
    }
};
*/

void createList(ListNode *L, vector<int> n, int pos)
{
    ListNode *tmp;
    ListNode *tail;

    for(int i = 0; i < n.size(); i++) {
        tmp = new ListNode(n[i]);
        if(i == pos) {
            tail = tmp;
        }
        L->next = tmp;
        L = L->next;
    }

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

    cout << b <<endl;

    return 0;
}
