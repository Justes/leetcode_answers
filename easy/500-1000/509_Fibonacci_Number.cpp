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
    int fib(int n) {
        if(n < 2) return n;
        int f1 = 0, f2 = 1, f3 = 1;
        for(int i = 2; i <= n; i++) {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        return f3;
    }
};

int main()
{
    int num = 4;
    Solution *sol;
    int k = sol->fib(num);
    cout << k << endl;

    return 0;
}

/*
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int> &left, const vector<int> &right) {return left[1] > right[1];});
        int sum = 0;
        for(int i = 0; i < boxTypes.size(); i++) {
            if(truckSize >= boxTypes[i][0]) {
                truckSize -= boxTypes[i][0];
                sum += boxTypes[i][0] * boxTypes[i][1];
            } else {
                sum += truckSize * boxTypes[i][1];
                break;
            }
        }
        return sum;
    }
};
*/
