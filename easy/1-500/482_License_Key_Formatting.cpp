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
    string licenseKeyFormatting(string s, int k) {
        string str;
        int cnt = 0;
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == '-') continue;
            if(cnt == k) str += '-', cnt = 0;
            str += toupper(s[i]);
            cnt++;
        }
        reverse(str.begin(), str.end());

        return str;
    }
};

int main()
{
    string num = "5F3Z-2e-9-w";
    int k = 4;
    Solution *sol;
    string s = sol->licenseKeyFormatting(num, k);
    cout << s << endl;
    return 0;
}

/*
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string str;
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == '-') continue;
            if(str.size() && str.size() % (k + 1) == k) str += '-';
            str += toupper(s[i]);
        }
        reverse(str.begin(), str.end());

        return str;
    }
};
*/
