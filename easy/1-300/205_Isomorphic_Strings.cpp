#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int len = s.length();
        unordered_map<char, char> mp;
        unordered_set<char> st;

        for(int i = 0; i < len; i++) {
            if(mp.count(s[i])) {
                if(mp[s[i]] != t[i]) return false;
            } else {
                if(st.count(t[i])) return false;
                mp[s[i]] = t[i];
                st.insert(t[i]);
            }
        }

        return true;
    }
};

int main() {
    //string s1 = "baba";
    //string s2 = "badc";
    string s1 = "title";
    string s2 = "paper";

    Solution* sol;
    bool k = sol->isIsomorphic(s1, s2);

	cout << k << endl;

    return 0;
}
