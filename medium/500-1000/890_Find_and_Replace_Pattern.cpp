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
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> str;
        unordered_map<char, char> mp;
        int m = pattern.size(), n = 0, k = 1;

        for(int i = 0; i < words.size(); i++) {
            string s = words[i];
            n = s.size();
            if(n != m) continue;
            k = 1;
            mp = {};
            vector<int> a(26, 0);

            for(int j = 0; j < n; j++) {
                if((mp.count(pattern[j]) == 0 && a[s[j] - 'a'] == 0) || mp[pattern[j]] == s[j]) {
                    mp[pattern[j]] = s[j];
                    a[s[j] - 'a'] = 1;
                } else {
                    k = 0;
                    break;
                }
            }

            if(k) str.push_back(s);
        }
        return str;
    }
};

int main()
{
    vector<string> s = {"ccc", "app"};
    string t = "abb";
    Solution *sol = new Solution;
    vector<string> x = sol->findAndReplacePattern(s, t);
    for(auto k : x)
        cout << k << endl;
    return 0;
}
