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
#include <map>
using namespace std;

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        for (int i = 0; i < ops.size(); i++) {
            m = min(m, ops[i][0]);
            n = min(n, ops[i][1]);
        }
        return m * n;
    }
};

int main()
{
    int m = 3, n = 3;
    vector<vector<int>> vec = {{2, 2}, {3, 3}};
    Solution *sol = new Solution;
    int k = sol->maxCount(m, n, vec);
    cout << k << endl;
    return 0;
}
