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
    bool checkRecord(string s) {
        unordered_map<char, int> mp;
        mp[s[0]] = 1;
        for(int i = 1; i < s.size(); i++) {
            mp[s[i]]++;
            if(s[i] != 'L') {
                mp['L'] = 0;
            }

            if(mp['A'] >= 2 || mp['L'] >= 3) return false;
        }

        return true;
    }
};

int main()
{
    string a = "PALLLPLL";
    Solution *sol = new Solution;
    bool k = sol->checkRecord(a);
    cout << k << endl;
    return 0;
}

/*
class Solution {
public:
    int findLUSlength(string a, string b) {
        return a == b ? -1 : max(a.size(), b.size());
    }
};
*/
