#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <deque>
#include <stack>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> vec(matrix[0].size(), vector<int>(matrix.size(), 0));

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                vec[j][i] = matrix[i][j];
            }
        }

        return vec;
    }
};

int main() {
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    Solution* sol;
    vector<vector<int>> vec = sol->transpose(matrix);
    for (auto k : vec) {
        for (auto x : k)
            cout << x << endl;
    }

    return 0;
}
