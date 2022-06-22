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
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val = image[sr][sc];
        dfs(image, sr, sc, val, color);
        return image;
    }

    void dfs(vector<vector<int>>& image, int i, int j, int val, int color) {
        if(i < 0 || i >= image.size() || j < 0 || j >= image[0].size() || image[i][j] == color || image[i][j] != val) return;
        image[i][j] = color;
        dfs(image, i + 1, j, val, color);
        dfs(image, i - 1, j, val, color);
        dfs(image, i, j + 1, val, color);
        dfs(image, i, j - 1, val, color);
        return;
    }
};

int main()
{
    vector<vector<int>> image = {{1,2,1,1},{1,1,0,1},{1,0,1,1}};
    int sr = 1, sc = 1, color = 2;
    Solution *sol;
    vector<vector<int>> k = sol->floodFill(image, sr, sc, color);
    for(auto y : k)
        for(auto x : y)
            cout << x << endl;

    return 0;
}
