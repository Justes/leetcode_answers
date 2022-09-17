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
#include <map>
#include <cstring>
using namespace std;


class Solution {
public:
    int m, n;
    int dfs(vector<int>& nums, vector<int>& mult, vector<vector<int>>& dp, int i, int j) {
        // i : pointer at nums
        // j : pointer at mult
        // if we have performed all operations, then return 0
        if (j == m) return 0;
        // memorized before - return the value here
        if (dp[i][j] != INT_MIN) return dp[i][j];
        // we can either choose an integer in `nums` the start or the end of the array
        // so we try both case and take the maximum value
        // then memorize it
        return dp[i][j] = max(
            // pick from the start
            mult[j] * nums[i] + dfs(nums, mult, dp, i + 1, j + 1),
            // pick from the end
            mult[j] * nums[n - 1 - j + i] + dfs(nums, mult, dp, i, j + 1)
        );
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        n = nums.size(), m = multipliers.size();
        vector<vector<int>> dp(m, vector<int>(m, INT_MIN));
        // or u can return dp[0][0] after running dfs
        return dfs(nums, multipliers, dp, 0, 0);
    }
};

int main()
{
    vector<int> nums = {-5,-3,-3,-2,7,1};
    vector<int> mul = {-10,-5,3,4,6};
    Solution *sol = new Solution;
    int k = sol->maximumScore(nums, mul);
    cout << k << endl;
}

/*
class Solution {
public:
    int m, n;

    int dfs(vector<int>& nums, vector<int>& mul, vector<vector<int>>& dp, int i, int j) {
        if (j == m) return 0;
        if (dp[i][j] != INT_MIN) return dp[i][j];
        return dp[i][j] = max(nums[i] * mul[j] + dfs(nums, mul, dp, i + 1, j + 1), // left
                       nums[n - 1 - j + i] * mul[j] + dfs(nums, mul, dp, i, j + 1) ); // right
    }

    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        n = nums.size(), m = multipliers.size();
        vector<vector<int>> dp(m, vector<int>(m, INT_MIN));
        return dfs(nums, multipliers, dp, 0, 0);
    }
};


class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n = (int) nums.size(), m = (int) multipliers.size(), remaining = n - m;
        vector<int> dp(m + 1);
        for (int i = 0; i < m; i++) {
            int mult = multipliers[m - 1 - i];
            for (int j = 0; j < m - i; j++) {
                dp[j] = max(mult * nums[j] + dp[j + 1], mult * nums[j + remaining] + dp[j]);
            }
            remaining += 1;
        }
        return dp[0];
    }
};
*/
