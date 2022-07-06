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
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<int> dir = {1, 0, -1, 0, 1};
        int row = grid.size(), col = grid[0].size(), per = 0;
        for(int r = 0; r < row; r++) {
            for(int c = 0; c < col; c++) {
                if(grid[r][c] == 0) continue;
                per += 4;
                for(int i = 0; i < 4; i++) {
                   int nr = r + dir[i], nc = c + dir[i + 1];
                   if(nr < 0 || nr == row || nc < 0 || nc == col || grid[nr][nc] == 0) continue;
                   per -= 1;
                }
            }
        }
        return per;
    }
};

int main()
{
    vector<vector<int>> num = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
    Solution *sol;
    int k = sol->islandPerimeter(num);
    cout << k << endl;
    return 0;
}
