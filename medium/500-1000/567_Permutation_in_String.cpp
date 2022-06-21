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
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size() < s1.size()) return false;

        vector<int> cnt1(26, 0);
        vector<int> cnt2(26, 0);
        int len1 = s1.size();
        for(int i = 0; i < s1.size(); i++) {
            cnt1[s1[i] - 'a']++;
            cnt2[s2[i] - 'a']++;
        }
        if(cnt1 == cnt2) return true;

        int start = 0, end = len1;
        while(end < s2.size()) {
            --cnt2[s2[start++] - 'a'];
            ++cnt2[s2[end++] - 'a'];
            if(cnt1 == cnt2) return true;
        }
        return false;
    }
};

int main()
{
    string s1 = "aba";
    string s2 = "eidbaaooo";
    Solution *sol;
    bool k = sol->checkInclusion(s1, s2);
    cout << k << endl;

    return 0;
}
