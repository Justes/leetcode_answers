#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);

        vector<vector<int>> nums2 = {};
        int len = nums.size();
        sort(nums.begin(), nums.end());
        int k = 0, f = 0, b = 0, v = 0;

        for (int i = 0; i < len - 1; i++) {
            k = nums[i];
            if(k > 0) {
                break;
            }
            f = i + 1, b = len - 1;

            while (f < b) {
                v = nums[f] + nums[b];
                if(v < -k) {
                    f++;
                } else if(v > -k) {
                    b--;
                } else {
                    vector<int> vec = {nums[i], nums[f], nums[b] };
                    nums2.push_back(vec);

                    while(f < b && nums[f] == vec[1]) f++;
                    while(f < b && nums[b] == vec[2]) b--;
                }
            }

            while (i + 1 < len && nums[i + 1] == nums[i]) {
                i++;
            }
        }

        return nums2;
    }
};

int main() {
    //vector<int> nums = {-1,0,1,2,-1,-4};
    //vector<int> nums = {0, 0, 0, 0};
    vector<int> nums = {-1, 0, 1, 0};

    Solution* sol;
    vector<vector<int>> nums2 = sol->threeSum(nums);

    int i = 0;
    for(auto x:nums2) {
        cout << "---" << ++i << endl;
        for (auto y:x)
            cout << y <<endl;
    }

    return 0;
}
