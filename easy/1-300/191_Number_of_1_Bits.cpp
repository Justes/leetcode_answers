#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cstdint>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int k = 0;
        while(n != 0) {
            n &= n - 1;
            k++;
        }
        return k;
    }
};

int main() {
    uint32_t n = 00000000000000000000000000001011;

    Solution* sol;
    int k = sol->hammingWeight(n);

	cout << k << endl;

    return 0;
}

/*
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int k = 0;
        while(n != 0) {
            if(n & 1) k++;
            n >>= 1;
        }
        return k;
    }
};
*/
