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
    int reverse(int x) {
        int num = 0;
        while(x) {
            if(num > INT_MAX / 10 || num < INT_MIN / 10) return 0;
            else num = num * 10 + x % 10;
            x /= 10;
        }
        return num;
    }
};

int main()
{
    int n = 1534236469;
    Solution *sol;
    int k = sol->reverse(n);
    cout << k << endl;

    return 0;
}
