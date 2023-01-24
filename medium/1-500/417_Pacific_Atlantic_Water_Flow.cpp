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
    vector<int> dir = {1, 0, -1, 0, 1};

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        vector<vector<int>> r;
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<bool>> pacific(m, vector<bool>(n));
        vector<vector<bool>> atlantic(m, vector<bool>(n));

        for(int i = 0; i < m; i++) {
            dfs(matrix, pacific, i, 0);
            dfs(matrix, atlantic, i, n - 1);
        }

        for(int j = 0; j < n; j++) {
            dfs(matrix, pacific, 0, j);
            dfs(matrix, atlantic, m - 1, j);
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(pacific[i][j] && atlantic[i][j]) {
                    r.push_back({i, j});
                }
            }
        }
        return r;
    }

    bool outOfBounds(int row, int col, int m, int n) {
        return row < 0 || col < 0 || row > m - 1 || col > n - 1;
    }

    void dfs(vector<vector<int>>& matrix, vector<vector<bool>>& visited, int i, int j) {
        int m = matrix.size(), n = matrix[0].size();
        visited[i][j] = true;

        for(int d = 0; d < 4; d++) {
            int row = i + dir[d], col = j + dir[d + 1];
            if(!outOfBounds(row, col, m, n) && !visited[row][col] && matrix[row][col] >= matrix[i][j])
                dfs(matrix, visited, row, col);
        }
    }
};

int main()
{
    vector<vector<int>> vec = {{1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4}};
    Solution *sol = new Solution;
    vector<vector<int>> y = sol->pacificAtlantic(vec);
    for(auto x : y)
        for(auto k : x)
            cout << k << endl;
    return 0;
}
