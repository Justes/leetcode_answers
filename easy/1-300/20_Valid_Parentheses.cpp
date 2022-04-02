#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> vec;
        map<char,char> dic = {{')','('}, { ']','['},{'}','{'} };
        int len = s.length();
        char c;
        if(len % 2) {
            return false;
        }

        for(int i=0; i<len; i++) {
            if(vec.empty()) {
                vec.push_back(s[i]);
            } else {
                c = vec.back();
                if(dic[s[i]] != c) {
                    vec.push_back(s[i]);
                } else {
                    vec.pop_back();
                }
            }
        }

        if(vec.empty()) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    string s;
    bool b;

    cin >> s;

    Solution sol;
    b = sol.isValid(s);
    cout << b << endl;

    return 0;
}
