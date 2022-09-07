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
#include <bitset>
#include <map>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int f = 0, b = nums.size() - 1;
        while(f <= b) {
            int mid = f + (b - f) / 2;
            if(nums[mid] == target) return mid;
            // ×óÓÐÐò
            if(nums[f] <= nums[mid]) {
                if(target >= nums[f] && target < nums[mid]) {
                    b = mid - 1;
                } else {
                    f = mid + 1;
                }
            } else {
                // ÓÒÓÐÐò
                if(target > nums[mid] && target <= nums[b]) {
                    f = mid + 1;
                } else {
                    b = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> nums = {4,5,6,7,0,2,3};
    int target = 2;
    Solution *sol = new Solution;
    int k = sol->search(nums, target);
    cout << k << endl;
    return 0;
}
