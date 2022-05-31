#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
		int len = nums.size();
		int maxIndex = 0;

		for (int i = 1, count = 1; i < len; i++) {
			nums[maxIndex] == nums[i] ? count++ : count--;
			if(count == 0) {
				maxIndex = i;
				count = 1;
			}
		}

		return nums[maxIndex];
    }
};

int main() {

	//vector<int> vec = {3, 2, 3};
	vector<int> vec = {2,2,1,1,1,2,2};

    Solution* sol;
    int k = sol->majorityElement(vec);

	cout << k << endl;

    return 0;
}

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
		int len = nums.size();
		map<int, int> mp;

		for (int i = 0; i < len; i++) {
			if(++mp[nums[i]] > len / 2) {
				return nums[i];
			}
		}

		return 0;
    }
};
*/
