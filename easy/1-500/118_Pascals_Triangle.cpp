#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        ios::sync_with_stdio(false);
        cin.tie(0);

        vector<vector<int>> nums;

        for (int i = 0; i < numRows; i++) {
            vector<int> num(i + 1, 1);
            for (int j = 1; j < i; j++) {
                num[j] = nums[i-1][j] + nums[i-1][j-1];
            }
            nums.push_back(num);
        }

        return nums;
    }
};

int main() {
    int row = 5;

    Solution* sol;
    vector<vector<int>> nums2 = sol->generate(row);

    int i = 0;
    for(auto x:nums2) {
        cout << "---" << ++i << endl;
        for (auto y:x)
            cout << y <<endl;
    }

    return 0;
}
