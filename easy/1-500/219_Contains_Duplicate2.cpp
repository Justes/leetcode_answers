#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int len = nums.size();
        unordered_map<int, int> mp;

        for(int i = 0; i < len; i++) {
            if(mp.count(nums[i])) {
                if(i - mp[nums[i]] <= k) {
                    return true;
                }
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};

int main() {
    vector<int> vec = {1,2,3,1};
    int val = 3;

    Solution* sol;
    bool k = sol->containsNearbyDuplicate(vec, val);

	cout << k << endl;

    return 0;
}
