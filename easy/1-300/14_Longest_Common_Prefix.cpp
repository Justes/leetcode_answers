#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s, short_str, value;
        s = short_str = "";
        int short_len, tmp, add = 0;
        short_len = 2000;

        auto iter = strs.begin();
        while(iter != strs.end()) {
            value = *iter;
            tmp = value.length();
            if(tmp < short_len) {
                short_len = tmp;
                short_str = value;
            }

            iter++;
        }

        for(int i=0; i < short_len; i++) {
            add = 1;
            iter = strs.begin();
            while(iter != strs.end()) {
                value = *iter;
                if(value[i] != short_str[i]) {
                    add = 0;
                    break;
                }
                iter++;
            }

            if(add) {
                s += value[i];
            } else {
                break;
            }
        }
        return s;
    }
};

int main() {
    vector<string> strs = {"flower", "flew"};
    string s;

    Solution sol;
    s = sol.longestCommonPrefix(strs);
    cout << s << endl;

    return 0;
}
