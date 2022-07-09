#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<map>
using namespace std;


class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
		int res = 0;
		for(int i = 0; i < timeSeries.size() - 1; i++) {
			res += min(duration, timeSeries[i + 1] - timeSeries[i]);
		}
		res += duration;
		return res;
    }
};

int main() {
	vector<int> nums = {1, 2};
	int dur = 2;

	Solution *sol;
	int k = sol->findPoisonedDuration(nums, dur);
	cout << k << endl;

	return 0;
}
