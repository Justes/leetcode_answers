#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <deque>
#include <stack>
#include <cmath>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int k = 0, odd = 0;
        for(auto c : s) mp[c]++;
        for(auto x : mp) odd += x.second & 1;

        return s.size() - odd + (odd > 0);
    }
};

int main() {
    string s1 = "aaxc";

    Solution* sol;
    int k = sol->longestPalindrome(s1);
    cout << k << endl;

    return 0;
}
