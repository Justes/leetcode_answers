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
    string intToRoman(int num) {
        string res;
        string r[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        for(int i = 0; num != 0; i++) {
            while(num >= val[i]) {
                num -= val[i];
                res += r[i];
            }
        }

        return res;
    }
};

int main()
{
    int num = 3998;
    Solution *sol;
    string k = sol->intToRoman(num);
    cout << k << endl;
    return 0;
}
