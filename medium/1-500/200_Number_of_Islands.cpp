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
    vector<int> dir{1, 0, -1, 0, 1};

    void dfs(vector<vector<char>>& grid, int x, int y, int m, int n) {
        if(x < 0 || x >= m || y < 0 || y >= n || grid[x][y] != '1') return;
        grid[x][y] = '0';
        for(int d = 0; d < 4; d++) {
            int a = x + dir[d], b = y + dir[d + 1];
            if((a >= 0) && (a < m) && (b >= 0) && (b < n) && grid[a][b] == '1') {
                dfs(grid, a, b, m, n);
            }
        }
        /*
        dfs(grid, x + 1, y, m, n);
        dfs(grid, x, y - 1, m, n);
        dfs(grid, x - 1, y, m, n);
        dfs(grid, x, y + 1, m, n);
        */


                for(int d = 0; d < 4; d++) {
                    int a = x + dir[d], b = y + dir[d + 1];
                    //cout << a << endl;
                    if((a >= 0) && (a < m) && (b >= 0) && (b < n) && grid[a][b] == '1') {
                        //grid[x][y] == '0';
                        dfs(grid, a, b, m, n);
                    }
                }

        //for(int i = 0; i < m; i++) {
            //for(int j = 0; j < n; j++) {
            //if(x < m && y < n && grid[x][y] == '1') {
                    //cout << "xy" << grid[x][y] << endl;
                //if(grid[i][j] != '1') return 0;



            //}
        //}
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size(), sum = 0;
        //cout << m << n << endl;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                    //cout << grid[i][j] << endl;
                if(grid[i][j] == '1') {
                    sum++;
                    cout << sum << endl;
                    dfs(grid, i, j, m, n);

                }
            }
        }
        return sum;
    }
};

int main()
{
    //vector<vector<char>> vec = {{'1','1'},{'1','0'}};
    vector<vector<char>> vec = {{'1','1','0','0','0'},{'1','1','0','0','0'},{'0','0','1','0','0'},{'0','0','0','1','1'}};
    Solution *sol = new Solution;
    int k = sol->numIslands(vec);
    cout << k << endl;
    return 0;
}
