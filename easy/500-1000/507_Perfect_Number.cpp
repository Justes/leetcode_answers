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
    bool checkPerfectNumber(int num) {
        if(num == 1) return 0;
        int sum = 1;
        for(int i = 2; i < sqrt(num); i++){
            if(num % i == 0)
                sum += i + (num / i);
        }
        return sum == num;
    }
};


int main()
{
    int num = 28;
    Solution *sol = new Solution;
    bool k = sol->checkPerfectNumber(num);
    cout << k << endl;
    return 0;
}

