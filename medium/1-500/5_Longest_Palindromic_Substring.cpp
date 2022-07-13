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

/*
// Manacher

class Solution {
public:
    string longestPalindrome(string s)
    {
        string T;// Transform S to T
        for(int i = 0; i < s.size(); i++)
            T += "#" + s.substr(i,1);
        T.push_back('#');

        cout << "T:" << T << endl;

        vector<int> P(T.size(),0); // Array to record longest palindrome
        int center=0,boundary=0,maxLen=0,resCenter=0;
        for(int i = 1; i< T.size() - 1; i++) {
            int iMirror = 2 * center - i; // calc mirror i = center-(i-center)
            cout << "i:" << i << endl;
            cout << "imirror:" << iMirror << endl;
            cout << "Pimirror:" << P[iMirror] << endl;
            P[i] = (boundary > i) ? min(boundary - i,P[iMirror]) : 0; // shortcut
            cout << "Pi:" << P[i] << endl;

            for(auto x : P)
                cout << "x:" << x << endl;
            while(i-1-P[i] >= 0 && i+1+P[i] <= T.size()-1 && T[i+1+P[i]] == T[i-1-P[i]]) // Attempt to expand palindrome centered at i
                P[i]++;

            if(i+P[i] > boundary) { // update center and boundary
                center = i;
                boundary = i+P[i];
                cout << "center: " << center << ", boundary: " << boundary << endl;
            }
            if(P[i] > maxLen) { // update result
                maxLen = P[i];
                resCenter = i;

                cout << "rescenter:" << resCenter << endl;
            }
        }
        return s.substr((resCenter - maxLen) / 2, maxLen);
    }
};
*/
