#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <algorithm>
#include <deque>
#include <stack>
#include <cmath>
#include <bitset>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size(), mx = 1;
        vector<int> dp(n, 1);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) {
                if(nums[j] < nums[i]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            mx = max(mx, dp[i]);
        }
        return mx;
    }
};


int main()
{
    vector<int> nums = {10,9,2,5,3,7,101,18};
    Solution *sol = new Solution;
    int k = sol->lengthOfLIS(nums);
    cout << k << endl;
    return 0;
}

/*
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            auto it = lower_bound(res.begin(), res.end(), nums[i]);
            if(it == res.end()) res.push_back(nums[i]);
            else *it = nums[i];
        }

        return res.size();
    }
};
*/

