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
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        k %= len;
        vector<int> vec = nums;
        for(int i = 0; i < len; i++) {
            nums[(i + k) % len] = vec[i];
        }
    }
};



int main() {
    vector<int> nums = {-4, -2, 0, 3, 5, 10};
    int step = 3;

    Solution* sol;
    sol->rotate(nums, step);
    for (auto x : nums)
        cout << x << endl;

    return 0;
}

/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

//{10, 5, 3, 0, -2, -4}
//{3, 5, 10, 0, -2, -4}
//{3, 5, 10, -4, -2, 0}
*/
