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

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
         return (s + s).find(s, 1) < s.size();
    }
};

int main()
{
    string num = "abaaba";
    Solution *sol;
    bool k = sol->repeatedSubstringPattern(num);
    cout << k << endl;
    return 0;
}

/*
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int i = 1, j = 0, n = s.size();
        vector<int> dp(n + 1, 0);
        while(i < s.size()) {
            if(s[i] == s[j]) dp[++i] = ++j;
            else if(j == 0) i++;
            else j = dp[j];
        }

        return dp[n] && dp[n] % (n - dp[n]) == 0;
    }
};
*/
