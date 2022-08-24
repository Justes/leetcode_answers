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

/*
class Solution {
public:

    void par(vector<string> &res, string str, int n, int m) {
        if(n == 0 && m == 0) {
            res.push_back(str);
            return;
        }
        if(m > 0) par(res, str + ")", n, m - 1);
        if(n > 0) par(res, str + "(", n - 1, m + 1);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        par(res, "", n, 0);
        return res;
    }
};
*/

int main()
{
    int n = 3;
    Solution *sol = new Solution;
    vector<string> x = sol->generateParenthesis(n);
    for(auto k : x)
        cout << k << endl;
    return 0;
}

/*
class Solution {
public:

    vector<string> generateParenthesis(int n) {
        vector<vector<string>> dp(n+1);
        dp[0] = {""};
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < i; j++){
                vector<string> left = dp[j];
                vector<string> right = dp[i-j-1];
                for(int k = 0; k < left.size(); k++){
                    for(int l = 0; l < right.size(); l++){
                        dp[i].push_back("(" + left[k] + ")" + right[l]);
                    }
                }
            }
        }
        return dp[n];
    }
};
*/
