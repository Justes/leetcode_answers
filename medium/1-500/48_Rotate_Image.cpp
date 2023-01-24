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
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(), matrix.end());
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = i + 1; j < matrix[i].size(); j++)
                 swap(matrix[i][j], matrix[j][i]);
        }
    }
};

int main()
{
    vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};
    Solution *sol = new Solution;
    sol->rotate(vec);
    for(auto y : vec)
        for(auto x : y)
            cout << x << endl;
    return 0;
}
