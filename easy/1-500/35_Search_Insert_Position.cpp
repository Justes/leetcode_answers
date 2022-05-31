#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int f = 0;
        int b = nums.size() - 1;

        while(f <= b) {
            int mid = f + (b - f) / 2;

            if(nums[mid] == target) {
                return mid;
            } else if(nums[mid] > target) {
                b = mid - 1;
            } else {
                f = mid + 1;
            }
        }

        return f;
    }
};

int main()
{
    vector<int> nums = {1,3,5,6};
    int target = 5;

    Solution * sol;
    int k = sol->searchInsert(nums, target);

    cout << k << endl;

    return 0;
}
