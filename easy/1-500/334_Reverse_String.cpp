#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int b;
        int f = 0;
        char tmp;

        b = s.size() - 1;
        while(f < b) {
            tmp = s[f];
            s[f] = s[b];
            s[b] = tmp;
            f++;
            b--;
        }
    }
};

int main()
{
    vector<char> s;

    s = {'h','e','l','l','o'};

    Solution sol;
    sol.reverseString(s);

    auto iter = s.begin();
    while(iter != s.end()) {
        cout << *iter << endl;
        iter++;
    }

    return 0;
}
