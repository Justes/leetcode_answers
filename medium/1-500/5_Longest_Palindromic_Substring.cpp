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
    string longestPalindrome(string s) {
        if(s.size() < 2) return s;
        int maxLeft = 0, maxLen = 1, maxRight = s.size() - 1, mid = 0;
        while(mid < s.size()) {
            int left = mid, right = mid;
            while(right < maxRight && s[right + 1] == s[right]) right++;
            mid = right + 1;
            while(left > 0 && right < maxRight && s[right + 1] == s[left - 1]) {
                right++;
                left--;
            }
            int len = right - left + 1;
            if(len > maxLen) {
                maxLen = len;
                maxLeft = left;
            }
        }
        return s.substr(maxLeft, maxLen);
    }
};

int main()
{
    string str = "cbba";
    Solution *sol;
    string k = sol->longestPalindrome(str);
    cout << k << endl;
    return 0;
}
