#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <deque>
#include <stack>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++)  nums[i] += nums[i - 1];
        return nums;
    }
};


int main() {
    vector<int> nums = {1,2,3,4,5};

    Solution* sol;
    vector<int> k = sol->runningSum(nums);
    for (auto x : k)
        cout << x << endl;

    return 0;
}
