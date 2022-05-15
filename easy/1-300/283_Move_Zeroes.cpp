#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
		int f = 0;
		int len = nums.size();

		for (int i = 0; i < len; i++) {
			if(nums[i] == 0) {
				f = i + 1;
				while(f < len && nums[f] == 0) {
					f++;
				}

				if((i < f) && (f < len)) {
					nums[i] = nums[f];
					nums[f] = 0;
					cout << nums[i] << endl;
				}
			}
		}

		for(auto x: nums) {
			cout << x << endl;
		}
    }
};

int main() {
	//vector<int> nums = {3, 2, 2, 3};
	//int val = 3;
	//vector<int> nums = {0, 1, 0, 3, 12};
	vector<int> nums = {-1, 0, -3, 5, 0, 6, 0};
	//vector<int> nums = {7,1,5,3,6,4};
	//vector<int> nums = {7,6 ,5,3,1};
	/*
	int val = 2;
	vector<int> nums = {1};
	int val = 1;
	//vector<int> nums = {};
	//int val = 0;
	*/

	Solution *sol;
	sol->moveZeroes(nums);
	int k =0;
	cout << k << endl;
	return 0;
}
