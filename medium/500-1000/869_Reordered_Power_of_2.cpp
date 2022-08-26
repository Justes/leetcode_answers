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
    bool reorderedPowerOf2(int n) {
        string res1 = to_string(n);
        sort(res1.begin(), res1.end());
        for (int i = 0; i < 30; i++) {
            string res2 = to_string(1 << i);
            sort(res2.begin(), res2.end());
            if (res1 == res2) return true;
        }
        return false;
    }
};

int main()
{
    int n = 61;
    Solution *sol = new Solution;
    bool k = sol->reorderedPowerOf2(n);
    cout << k << endl;
    return 0;
}
