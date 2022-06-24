#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<int> dir = {-1, 0, 1, 0, -1};
        int m = mat.size(), n = mat[0].size();
        queue<pair<int, int>> q;
        for(int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if(mat[r][c] == 0) q.emplace(r, c);
                else mat[r][c] = -1;
            }
        }

        int nr, nc;
        while(!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            for (int i = 0; i < 4; i++) {
                nr = r + dir[i];
                nc = c + dir[i + 1];
                if(nr < 0 || nr >= m || nc < 0 || nc >= n || mat[nr][nc] != -1) continue;
                mat[nr][nc] = mat[r][c] + 1;
                q.emplace(nr, nc);
            }
        }

        return mat;
    }
};

int main() {
    vector<vector<int>> mat = {{0,0,0},{0,1,0},{1,1,1}};

    Solution *sol;
    vector<vector<int>> vec = sol->updateMatrix(mat);

    for(auto v : vec)
        for(auto k : v)
            cout << k << endl;
    return 0;
}


/*
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<int> dir = {-1, 0, 1, 0, -1};
        int m = mat.size(), n = mat[0].size();
        queue<pair<int, int>> q;
        for (int r = 0; r < m; r++)
            for (int c = 0; c < n; c++)
                if (mat[r][c] == 0) q.emplace(r, c);
                else mat[r][c] = -1; // Marked as not processed yet!


        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nr = r + dir[i], nc = c + dir[i+1];
                if (nr < 0 || nr == m || nc < 0 || nc == n || mat[nr][nc] != -1) continue;
                mat[nr][nc] = mat[r][c] + 1;
                q.emplace(nr, nc);
            }
        }

        return mat;
    }
};

*/
