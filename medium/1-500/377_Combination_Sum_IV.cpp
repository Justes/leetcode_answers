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
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> cache(target + 1, -1);
        return dfs(nums, target, cache);
    }

    int dfs(vector<int>& nums, int k, vector<int>& cache) {
        if(k == 0) return 1;
        if(cache[k] != -1) return cache[k];

        int ways = 0;
        for(int num : nums) {
            if(k >= num) ways += dfs(nums, k - num, cache);
        }
        return cache[k] = ways;
    }
};

int main()
{
    vector<int> nums = {1, 2 ,3};
    int target = 4;
    Solution *sol = new Solution;
    int k = sol->combinationSum4(nums, target);
    cout << k << endl;
    return 0;
}

/*
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> dp(target + 1, 0);
        dp[0] = 1;
        sort(nums.begin(), nums.end());
        for(int i = 1; i <= target; i++) {
            for(auto num : nums) {
                if(i < num) break;
                dp[i] += dp[i - num];
            }
        }
        return dp.back();
    }
};
*/
