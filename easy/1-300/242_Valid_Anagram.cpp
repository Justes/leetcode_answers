#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp1, mp2;

        if(s.length() != t.length()) {
            return false;
        }

        for (int i = 0; i < s.length(); i++) {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }

        for (auto x: mp1) {
            if(mp2.count(x.first) == 0 || mp2[x.first] != x.second) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    string s1 = "anagram", s2 = "nagarab";

    Solution* sol;
    bool k = sol->isAnagram(s1, s2);

    cout << k << endl;

    return 0;
}
