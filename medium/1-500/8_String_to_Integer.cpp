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
    int myAtoi(string s) {
        int sign = 1, i = 0, num = 0;
        while(i < s.size() && s[i] == ' ') i++;
        if(s[i] == '-' || s[i] == '+') {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while(i < s.size() && (s[i] >= '0' && s[i] <= '9')) {
            int digit = (s[i] - '0') * sign;
            if(sign == 1 && (num > INT_MAX / 10 || num == INT_MAX / 10 && digit > INT_MAX % 10)) return INT_MAX;
            if(sign == -1 && (num < INT_MIN / 10 || num == INT_MIN / 10 && digit < INT_MIN % 10)) return INT_MIN;
            num = num * 10 + digit;
            i++;
        }
        return num;
    }
};

int main()
{
    string str = "-2332";
    Solution *sol;
    int k = sol->myAtoi(str);
    cout << k << endl;
    return 0;
}
