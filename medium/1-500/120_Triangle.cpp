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
using namespace std;

// µ¹Èý½Ç
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i = triangle.size() - 2; i >= 0; i--) {
            for(int j = 0; j < triangle[i].size(); j++) {
                triangle[i][j] = min(triangle[i + 1][j], triangle[i + 1][j + 1]) + triangle[i][j];
            }
        }

        return triangle[0][0];
    }
};

int main()
{
    //vector<vector<int>> nums = {{-10}, {-20, -30}};
    vector<vector<int>> nums = {{2},{3,4},{6,5,7},{4,1,8,3}};
    Solution *sol;
    int k = sol->minimumTotal(nums);
    cout << k << endl;

    return 0;
}

/*
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int sum = 0, m = triangle.size(), n = triangle[m - 1].size();
        if(m == 1) return triangle[0][0];
        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[0][0] = triangle[0][0];

        for(int i = 1; i < m; i++) {
            n = triangle[i].size();
            for (int j = 0; j < n; j++) {
                if(j == 0) {
                    dp[i][j] = dp[i - 1][j] + triangle[i][j];
                    if(i == m - 1) sum = dp[i][j];
                } else if(j + 1 < n) {
                    dp[i][j] = min(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i][j];
                } else {
                    dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
                }
                if(i == m - 1) sum = min(sum, dp[i][j]);
            }
        }
        return sum;
    }
};
*/
