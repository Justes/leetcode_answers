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

/*
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res = nums;
        int f = 0, b = nums.size() - 1, fv = 0, bv = 0, k = b;
        while (f <= b) {
            fv = nums[f] * nums[f];
            bv = nums[b] * nums[b];
            if (fv < bv) {
                res[k--] = bv;
                b--;
            } else {
                res[k--] = fv;
                f++;
            }
        }

        return res;
    }
};
*/
