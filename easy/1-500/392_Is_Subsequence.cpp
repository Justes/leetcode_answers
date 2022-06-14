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
    bool isSubsequence(string s, string t) {
        int tmp = 0;
        for(int i = 0; i < s.size(); i++) {
            int p =  t.find(s[i], tmp);
            if(p == t.npos) return false;
            tmp = p + 1;
        }
        return true;
    }
};

int main() {
    string s1 = "axc";
    string s2 = "ahbgdc";

    Solution* sol;
    bool k = sol->isSubsequence(s1, s2);
    cout << k << endl;

    /*
    for (auto x : k)
        cout << x << endl;
    */

    return 0;
}
