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
    string addStrings(string num1, string num2) {
        string str = "";
        int i = num1.size() - 1, j = num2.size() - 1;
        int up = 0, sum = 0, sub = 0;
        char c = '0';
        while(i >= 0 || j >= 0 || up) {
            sum = up;
            if(i >= 0) sum += num1[i--] - '0';
            if(j >= 0) sum += num2[j--] - '0';
            sub = sum % 10;
            up = sum / 10;
            c = sub + '0';
            str = c + str;
        }

        return str;
    }
};

int main() {
    string num1 = "999";
    string num2 = "9";

    Solution* sol;
    string k = sol->addStrings(num1, num2);
    cout << k << endl;

    return 0;
}
