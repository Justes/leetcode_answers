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
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size(), cnt = 0;
        if(m * n != r * c) return mat;

        vector<vector<int>> res;
        vector<int> tmp;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cnt++;
                tmp.push_back(mat[i][j]);
                if(cnt % c == 0) {
                    res.push_back(tmp);
                    tmp = {};
                }
            }
        }
        return res;
    }
};

int main()
{
    vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int r = 1, c = 12;
    Solution *sol = new Solution;
    vector<vector<int>> k = sol->matrixReshape(vec, r, c);
    for(auto y : k)
        for(auto x : y)
            cout << x << endl;
    return 0;
}
