#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,k;
        map<int, int> dict;
        vector<int> vec;
        int len = nums.size();
        for(i=0; i<len; i++) {
            k = target - nums[i];
            if(dict.count(nums[i]) != 0) {
                vec.push_back(i);
                vec.push_back(dict[nums[i]]);
                break;
            } else {
                dict[k] = i;
            }
        }
        return vec;
    }
};

int main() {
    vector<int> nums = {2, 7};
    vector<int> values;
    int target = 9;

    Solution sol;
    values = sol.twoSum(nums, target);

    auto iter = values.begin();
    while(iter != values.end()) {
        cout << *iter << endl;
        iter++;
    }

    return 0;
}
