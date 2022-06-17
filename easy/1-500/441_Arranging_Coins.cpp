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
    int arrangeCoins(int n) {
        int k = 0;
        for (int i = 1; i <= n; i++) {
            if ((i % n == 0) || (i % n && (n - i) >= 0)) {
                k++;
                n -= i;
            }
        }
        return k;
    }
};

int main() {
    int num = 5;

    Solution* sol;
    int k = sol->arrangeCoins(num);
    cout << k << endl;

    return 0;
}

/*
class Solution {
public:
    int arrangeCoins(int n) {
        return (int)floor(sqrt(2 * double(n + 0.25)) - 0.5);
    }
};
*/

/*
class Solution {
public:
    int arrangeCoins(int n) {
        long i = 0, sum = 0;
        while (sum <= n) sum += ++i;
        return i-1;
    }
};
*/

/*
class Solution {
public:
    int arrangeCoins(int n) {
        long lo = 0, hi = n, mid, tmp;
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;
            tmp = mid * (mid + 1) / 2;

            if (tmp == n) return mid;

            if (tmp <= n) lo = mid + 1;
            else hi = mid - 1;
        }
        return lo-1;
    }
};
*/
