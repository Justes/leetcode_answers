#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> mp;

        while(n != 1) {
            if(mp.count(n)) {
                return false;
            } else {
                mp[n] = 1;
            }

            int sum = 0;
            while(n) {
                sum += pow(n % 10, 2);
                n /= 10;
            }
            n = sum;
        }

        return true;
    }
};

int main() {
    int n = 19;

    Solution* sol;
    bool k = sol->isHappy(n);

	cout << k << endl;

    return 0;
}
