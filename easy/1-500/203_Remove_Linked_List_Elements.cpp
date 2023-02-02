#include<iostream>
#include<vector>
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
    ListNode* removeElements(ListNode* head, int val) {
		ListNode *cur = head;
		ListNode *pre = head;
        while (cur) {
			if(cur->val == val) {
				if(cur == head) {
					head = head->next;
				}
				pre->next = cur->next;
			} else {
				pre = cur;
			}
			cur = cur->next;
        }

		return head;
    }
};

int main() {
	vector<int> nums = {6, 1, 2, 3, 4, 6, 7, 6, 6};
	ListNode *node = new ListNode(nums[0]);
	ListNode *head = node;

	int val = 6;

	for(int i = 1; i < nums.size(); i++) {
		ListNode *tmp = new ListNode();
		tmp->val = nums[i];
		node->next = tmp;
		node = node->next;
	}

	Solution *sol;
	ListNode *k = sol->removeElements(head, val);

	while(k) {
		cout << k->val << endl;
		k = k->next;
	}
	return 0;
}

/*
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* node = new ListNode(0);
        node->next = head;
        ListNode* cur = node;
        while (cur->next != NULL) {
            if (cur->next->val == val) {
                ListNode* tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            } else {
                cur = cur->next;
            }
        }

        head = node->next;
        delete node;
        return head;
    }
};
*/
