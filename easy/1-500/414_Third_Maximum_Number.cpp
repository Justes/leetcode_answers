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
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int len = nums.size();
        int index = len < 3 ? 0 : 2;

        return nums[index];
    }
};

int main() {
    vector<int> nums = {2, 2, 3};

    Solution* sol;
    int k = sol->thirdMax(nums);
    cout << k << endl;

    return 0;
}

/*
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        return s.size() < 3 ? *max_element(s.begin(), s.end()) : *next(s.begin(), s.size() - 3);
    }
};
*/
