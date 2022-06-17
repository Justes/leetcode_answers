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
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            nums[i] = pow(nums[i], 2);
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

int main() {
    vector<int> nums = {-4, -2, 0 , 3, 5, 10};

    Solution* sol;
    vector<int> k = sol->sortedSquares(nums);
    for (auto x : k)
        cout << x << endl;

    return 0;
}
