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
    ListNode* reverseList(ListNode* head) {
        ListNode *pre  = nullptr;
		ListNode *cur = head;
        while (cur) {
			ListNode *tmp = cur->next;
			cur->next = pre;
			pre = cur;
			cur = tmp;
        }
        return pre;
    }
};

int main() {
	vector<int> nums = {1, 2, 3, 12};
	ListNode *node = new ListNode(nums[0]);
	ListNode *head = node;

	for(int i = 1; i < nums.size(); i++) {
		ListNode *tmp = new ListNode();
		tmp->val = nums[i];
		node->next = tmp;
		node = node->next;
	}

	Solution *sol;
	ListNode *k = sol->reverseList(head);

	while(k) {
		cout << k->val << endl;
		k = k->next;
	}
	return 0;
}

/*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
		vector<int> vec;
		while(head) {
			vec.push_back(head->val);
			head = head->next;
		}

		ListNode *node = new ListNode();
		ListNode *n = node;
		for(int i = vec.size() - 1; i >= 0; i--) {
			ListNode *tmp = new ListNode();
			tmp->val = vec[i];
			node->next = tmp;
			node = node->next;
		}

		return n->next;
    }
};
*/
