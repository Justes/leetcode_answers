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
    int search(vector<int>& nums, int target) {
        int f = 0, b = nums.size() - 1, index = -1;
        while(f <= b) {
            int mid = f + (b - f) / 2;
            if(nums[mid] < target) {
                f = mid + 1;
            } else if(nums[mid] > target) {
                b = mid - 1;
            } else {
                index = mid;
                break;
            }
        }
        return index;
    }
};

int main() {
    vector<int> nums = {-1,9,3,5,9,12};
    int target = 9;

    Solution* sol;
    int k = sol->search(nums, target);
    cout << k << endl;

    return 0;
}
