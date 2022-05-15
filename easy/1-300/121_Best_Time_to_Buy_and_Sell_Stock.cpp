#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
		int min = 10001, p = 0, profit = 0;
		int len = prices.size();

		for(int i = 0; i < len; i++) {
			if(prices[i] < min) {
				min = prices[i];
			}
			p = prices[i] - min;
			if(profit < p) {
				profit = p;
			}
		}

		return profit;
	}
};

int main() {
	//vector<int> nums = {3, 2, 2, 3};
	//int val = 3;
	vector<int> nums = {7,8,2,1};
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
	int k = sol->maxProfit(nums);
	cout << k << endl;
	return 0;
}
