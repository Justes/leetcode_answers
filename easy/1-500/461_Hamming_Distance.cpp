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
    int hammingDistance(int x, int y) {
        int n = x ^ y, cnt = 0;
        while(n) {
            n &= n - 1;
            cnt++;
        }
        return cnt;
    }
};

int main() {
    int x = 1, y = 4;

    Solution* sol;
    int k = sol->hammingDistance(x, y);
    cout << k << endl;

    return 0;
}
