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
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;
        char ch;
        for(auto c : s) mp[c]++;
        for(auto c : t) {
            mp[c]--;
            if(mp.count(c) == 0 || mp[c] == -1) {
                ch = c;
                break;
            }
        }
        return ch;
    }
};

int main() {
    string s1 = "a";
    string s2 = "aa";

    Solution* sol;
    char k = sol->findTheDifference(s1, s2);
    cout << k << endl;

    /*
    for (auto x : k)
        cout << x << endl;
    */

    return 0;
}
