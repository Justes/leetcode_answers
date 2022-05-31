#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <deque>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        while(n > 1) {
            if(n % 2) return false;
            n /= 2;
        }

        return n == 1;
    }
};

int main() {
    int n;
    cin >> n;

    Solution* sol;
    bool k = sol->isPowerOfTwo(n);
    cout << k << endl;

    return 0;
}
