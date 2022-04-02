#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        string str = to_string(x);
        int len = str.length();
        int s = len / 2;
        for(int i=0; i <= s; i++) {
            if(str[i] != str[len-i-1]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    int i;
    bool b;
    cin >> i;

    Solution sol;
    b = sol.isPalindrome(i);
    cout << b << endl;
    return 0;
}
