#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cstdint>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t k = 0;

        for (int i = 0; i < 32; i++) {
            k <<= 1;
            k |= n & 1;
            n >>= 1;
        }

        return k;
    }
};

int main() {
    uint32_t n = 00000000000000000000000000001011;

    Solution* sol;
    uint32_t k = sol->reverseBits(n);

	cout << k << endl;

    return 0;
}
