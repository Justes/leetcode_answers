#include <iostream>
#include <string>
using namespace std;

// newton
// https://leetcode.com/problems/sqrtx/discuss/25057/3-4-short-lines-Integer-Newton-Every-Language
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        unsigned r = x;

        while (r > x / r) {
            r = (r + x / r) / 2;
        }
        return r;
    }
};

int main() {
    int x = 2147483647;
    //int x = 9;

    Solution *sol;
    int k = sol->mySqrt(x);

    cout << k << endl;

    return 0;
}

/*
// binary search
class Solution {
public:
    int mySqrt(int x) {
        int f = 1, b = x;

        if (x == 0) {
            return 0;
        }

        while(true) {
            int mid = f + (b - f) / 2;
            if (mid > x / mid) {
                b = mid - 1;
            } else if ((mid + 1) > x / (mid + 1)) {
                return mid;
            } else {
                f = mid + 1;
            }
        }
    }
};

// plain
class Solution {
public:
    int mySqrt(int x) {
        int a = 0;
        int h = x;

        if (x == 0 || x == 1) {
            return x;
        }

        int b = x / 2;
        while (b > x / b) {
            b = h / 2;
            h = h / 2;
        }

        for (int i = b + 1; i <= x / 2; i++) {
            if (i == x / i) {
                return i;
            } else if(i > x / i) {
                return i - 1;
            }
        }

        return b;
    }
};
*/
