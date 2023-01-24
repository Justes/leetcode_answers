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
    int mirrorReflection(int p, int q) {
        while (p % 2 == 0 && q % 2 == 0) p >>= 1, q >>= 1;
        return 1 - p % 2 + q % 2;
    }
};

int main()
{
    int p = 10, q = 3;
    Solution *sol = new Solution;
    int k = sol->mirrorReflection(p, q);
    cout << k << endl;
    return 0;
}

/*
class Solution {
public:
    int mirrorReflection(int p, int q) {
        int g = gcd(p,q);
        p = p / g;
        q = q / g;

        if(p % 2 == 0)
            return 2;
        return q % 2;
    }
};

class Solution {
public:
    int mirrorReflection(int p, int q) {
        int lcm = std::lcm(p, q);
        int m = lcm / p;
        int n = lcm / q;

        if(m % 2 == 0) return 0;//meaning m=even meaning reflection count is odd hence 2
        if(n % 2 == 1) return 1;//meaning n is odd meaing number of squres is even so return 1
        else return 2;
    }
};

*/
