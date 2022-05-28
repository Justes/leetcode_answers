#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
		int len = nums.size();
		int total = len * (len + 1) / 2;
		int sum = 0;
		for(auto x : nums) {
			sum += x;
		}

		return total - sum;
    }
};

int main() {
	vector<int> nums = {3, 0, 1};
	
	Solution *sol;
	int k = sol->missingNumber(nums);
	cout << k << endl;
	return 0;
}

/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
		int len = nums.size();
		for(int i = 0; i <= len; i++) {
			if(count(nums.begin(), nums.end(), i) == 0) {
				return i;
			}
		}

		return 0;
    }
};
*/
