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
    string reverseStr(string s, int k) {
        for(int i = 0; i < s.size(); i += 2 * k) {
            for(int j = i, b = min(i + k - 1, (int)s.size() - 1); j < b; j++, b--) {
                swap(s[j], s[b]);
            }
        }
        return s;
    }
};

int main()
{
    string a = "ababac";
    int b = 2;
    Solution *sol = new Solution;
    string k = sol->reverseStr(a, b);
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

class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k) {
            if (i + k < s.size()) {
                reverse(s.begin() + i, s.begin() + i + k);
            } else {
                reverse(s.begin() + i, s.end());
            }
        }

        return s;
    }
};
*/
