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

/*
tmp = 101, num = 101, mask = 0

tmp = 10,  mask = 00 | 1, m = 01
tmp = 1,   mask = 011 | 1, m = 011
tmp = 0,   mask = 0111 | 1, m = 0111

~num = 11111010, mask = 0111
num & mask = 0010
*/
class Solution {
public:
    int findComplement(int num) {
        int mask = 0, tmp = num;
        while(tmp) {
            tmp = tmp >> 1;
            mask = (mask << 1) | 1;
        }
        return ~num & mask;
    }
};

int main()
{
    int num = 5;
    cout << bitset<8>(~num) << endl;
    Solution *sol;
    int k = sol->findComplement(num);
    cout << k << endl;
    return 0;
}

/*
101 ^ 000 = 010
010 ^ 010 = 101
101 ^ 100 = 010

tmp = 101, num = 101, a = 0

tmp = 10,  num = 010, a = 1
tmp = 1,   num = 101, a = 2
tmp = 0,   num = 010, a = 3

class Solution {
public:
    int findComplement(int num) {
        int a = 0, tmp = num;
        while(tmp) {
            tmp >>= 1;
            num ^= (1 << a);
            a += 1;
        }
        return num;
    }
};

class Solution {
public:
    int findComplement(int num) {
        return ~num & ((1 << (int)log2(num))-1);
    }
};

num = 101, mask = 11111111

num = 101, mask = 11111110
num = 101, mask = 11111100
num = 101, mask = 11111000

~num = 11111010, ~mask = 00000111
~num & ~mask = 00000010

class Solution {
public:
    int findComplement(int num) {
        unsigned mask = ~0;
        while (num & mask) mask <<= 1;
        return ~mask & ~num;
    }
};
*/
