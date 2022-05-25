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
    void deleteNode(ListNode* head) {
		*head = *head->next;
    }
};

int main() {
	vector<int> nums = {4, 5, 1, 9};
	ListNode *node = new ListNode(nums[0]);
	ListNode *head = node;
	ListNode *n;

	int val = 5;

	for(int i = 1; i < nums.size(); i++) {
		ListNode *tmp = new ListNode();
		tmp->val = nums[i];
		node->next = tmp;
		if(nums[i] == 5) {
			n = node;
		}
		node = node->next;
	}

	Solution *sol;
	sol->deleteNode(n);
	ListNode *k = node;

	while(k) {
		cout << k->val << endl;
		k = k->next;
	}
	return 0;
}
