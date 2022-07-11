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
    string convertToBase7(int num) {
        int res = 0, cnt = 0;
        while(num) {
            res += (num % 7) * pow(10, cnt);
            num /= 7;
            cnt++;
        }
        return to_string(res);
    }
};

int main()
{
    int num = -7;
    Solution *sol;
    string k = sol->convertToBase7(num);
    cout << k << endl;
    return 0;
}
