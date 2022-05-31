#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		int k = 0;
		int len = nums.size();

		for (int i=0; i<len; i++) {
			if(nums[k] != nums[i]) {
				nums[++k] = nums[i];
			}
		}

		return k + 1;
    }
};

int main() {
	vector<int> nums = {0, 0, 1, 1, 2, 2, 3, 3, 4};

	Solution *sol = new Solution();
	int num = sol->removeDuplicates(nums);
	cout << num << endl;
	return 0;
}
