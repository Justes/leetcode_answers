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
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        backtrack(s, 0, ans);
        return ans;
    }

    void backtrack(string &s, int i, vector<string> &ans) {
        if (i == s.size()) {
            ans.push_back(s);
            return;
        }
        // save initial value
        char c = s[i];
        // path1: toggle lower/upper case
        s[i] = islower(c) ? toupper(c) : tolower(c);
        cout << s[i] << endl;
        backtrack(s, i + 1, ans);
        // path2: reset back(NOT go to this path if c is digit)
        if (isalpha(c)) {
            s[i] = c;
            backtrack(s, i + 1, ans);
        }
    }
};

int main()
{
    string s = "a1b2c3";
    Solution *sol;
    vector<string> k = sol->letterCasePermutation(s);
    for(auto x : k)
        cout << x << endl;

    return 0;
}
