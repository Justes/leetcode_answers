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
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> result(nums.size(),true);
        for(auto& num : nums){
            result[num - 1] = false;
        }

        vector<int> res;
        for(int i = 0; i< nums.size(); i++){
            if(result[i]) {
                res.push_back(i + 1);
            }
        }
        return res;
    }
};

int main() {
    vector<int> num = {4,3,2,7,8,2,3,1};

    Solution* sol;
    vector<int> nums = sol->findDisappearedNumbers(num);
    for (auto k : nums)
        cout << k << endl;

    return 0;
}

/*
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> vec;
        set<int> st(nums.begin(), nums.end());
        int len = nums.size();
        for(int i = 1; i <= len; i++) {
            if(st.count(i) == 0) {
                vec.push_back(i);
            }
        }
        return vec;
    }
};
*/
