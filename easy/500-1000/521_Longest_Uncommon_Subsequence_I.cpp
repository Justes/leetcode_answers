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
    int findLUSlength(string a, string b) {
        int m = a.length(),n = b.length();
        vector<vector<int>> dp(m + 1,vector<int>(n + 1));
        for(int i = 0; i < m + 1; i++) {
            for(int j = 0; j < n + 1; j++) {
                if(i == 0 || j == 0) dp[i][j] = 0;
                else if(a[i-1] == b[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        if(dp[m][n] == m && m == n) return -1;
        return max(m, n);
    }
};

int main()
{
    string a = "aba", b = "bbb";
    Solution *sol = new Solution;
    int k = sol->findLUSlength(a, b);
    cout << k << endl;
    return 0;
}

/*
class Solution {
public:
    int findLUSlength(string a, string b) {
        return a == b ? -1 : max(a.size(), b.size());
    }
};
*/
