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
    string convert(string s, int numRows) {
        if (numRows <= 1) return s;
        vector<string> vstr(numRows);
        string str;
        int row = 0, step = 1;

        for (int i = 0; i < s.size(); i++) {
            vstr[row] += s[i];

            if(row == 0) {
                step = 1;
            } else if(row == numRows - 1) {
                step = -1;
            }
            row += step;
        }

        for (int i = 0; i < numRows; i++) {
            str += vstr[i];
        }

        return str;
    }
};


int main() {
    string s = "PAYPALISHIRING";
    int n = 3;

    Solution* sol;
    string k = sol->convert(s, n);
    cout << k << endl;
    /*
    vector<int> nums = {1,2,3,4,5};
    Solution* sol;
    vector<int> k = sol->convert(nums);
    for (auto x : k)
        cout << x << endl;
        */

    return 0;
}
