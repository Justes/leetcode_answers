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
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> vec;
        vector<int> cnt(26, 0), tmp(26, 0);
        for(auto s : words2) {
            tmp = counter(s);
            for(int i = 0; i < 26; i++) {
                cnt[i] = max(cnt[i], tmp[i]);
            }
        }

        for(auto s : words1) {
            tmp = counter(s);
            int i = 0;
            for(i = 0; i < 26; i++) {
                if(tmp[i] < cnt[i]) break;
            }
            if(i == 26) vec.push_back(s);
        }
        return vec;
    }

    vector<int> counter(string words) {
        vector<int> cnt(26, 0);
        for(char c : words) cnt[c - 'a']++;
        return cnt;
    }
};

int main()
{
    vector<string> s = {"amazon","apple","facebook","google","leetcode"};
    vector<string> t = {"loo", "eo", "g"};
    Solution *sol = new Solution;
    vector<string> x = sol->wordSubsets(s, t);
    for(auto k : x)
        cout << k << endl;
    return 0;
}
