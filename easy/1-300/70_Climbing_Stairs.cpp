#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int climbStairs(int n) {
		ios_base::sync_with_stdio(false);
		cin.tie(0);

		if(n <= 2) return n;
		int f1 = 1, f2 = 2, f3 = 0;

		for(int i = 2; i < n; i++) {
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}

		return f3;
    }

};


int main() {
	//vector<int> nums = {3, 2, 2, 3};
	//int val = 3;
	//vector<int> nums = {0, 1, 0, 3, 12};
	//vector<int> nums = {1,8,6,2,5,4,8,3,7};
	//vector<int> nums = {7,1,5,3,6,4};
	//vector<int> nums = {7,6 ,5,3,1};
	int nums = 3;
	/*
	vector<int> nums = {1};
	int val = 1;
	//vector<int> nums = {};
	//int val = 0;
	*/

	Solution *sol;
	int k = sol->climbStairs(nums);
	cout << k << endl;
	return 0;
}
