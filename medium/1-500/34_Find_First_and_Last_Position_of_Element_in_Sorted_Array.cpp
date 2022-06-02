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
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int f = 0, b = nums.size() - 1;
        int len = nums.size();

        while(f <= b) {
            int mid = f + (b - f) / 2;
            if(nums[mid] > target) {
                b = mid;
                b--;
            } else if(nums[mid] < target){
                f = mid;
                f++;
            } else {
                res.push_back(mid);
                res.push_back(mid);
                int pivot = mid + 1;
                mid--;

                while(mid >= 0) {
                    if(nums[mid] != target) {
                        res[0] = mid + 1;
                        break;
                    }
                    res[0] = mid--;
                }

                while(pivot < len) {
                    if(nums[pivot] != target) {
                        res[1] = pivot - 1;
                        break;
                    }
                    res[1] = pivot++;
                }
                break;
            }
        }

        if(res.size() == 0) {
            res = {-1, -1};
        }

        return res;
    }
};

int main() {
    vector<int> nums = {1};
    int target = 1;

    Solution* sol;
    vector<int> k = sol->searchRange(nums, target);
    for (auto x : k)
        cout << x << endl;

    return 0;
}
