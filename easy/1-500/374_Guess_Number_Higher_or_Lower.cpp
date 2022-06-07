#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <deque>
#include <stack>
#include <cmath>
using namespace std;

class Solution {
public:
    int guessNumber(int n) {
        int f = 1;
        while(f <= n) {
            int mid = f + (n - f) / 2;
            int tmp = guess(mid);
            if(tmp == -1) {
                n = mid - 1;
            } else if(tmp == 1) {
                f = mid + 1;
            } else {
                return mid;
            }
        }
    }

    int guess(int num) {
        int pick = 2;
        if(num > pick) {
            return -1;
        } else if(num < pick) {
            return 1;
        } else {
            return 0;
        }
    }
};

int main() {
    int n = 2;

    Solution* sol;
    int k = sol->guessNumber(n);
    cout << k << endl;
    /*
    for (auto x : k)
        cout << x << endl;
        */

    return 0;
}
