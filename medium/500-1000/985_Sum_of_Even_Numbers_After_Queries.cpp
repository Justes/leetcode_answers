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
#include <cstring>
#include <sstream>
using namespace std;


class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> res;
        int sum = 0;
        for (auto x : nums)
            if (x % 2 == 0) sum += x;

        for (auto q : queries) {
            int index = q[1], value = q[0];
            if(nums[index] % 2 == 0) sum -= nums[index];
            nums[index] += value;
            if(nums[index] % 2 == 0) sum += nums[index];
            res.push_back(sum);
        }
        return res;
    }
};


int main()
{
    vector<int> nums1 = {1,2,3,4};
    vector<vector<int>> nums2 = {{1,0},{-3,1},{-4,0},{2,3}};
    Solution *sol = new Solution;
    vector<int> y = sol->sumEvenAfterQueries(nums1, nums2);
    for (auto k : y)
        cout << k << endl;
}

/*
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> res;
        int sum = 0;
        for (auto x : nums)
            if (x % 2 == 0) sum += x;

        for (auto q : queries) {
            int index = q[1], val = q[0];
            nums[index] += val;
            if (nums[index] % 2 == 0) {
                if (val % 2 == 0) {
                    sum += val;
                } else {
                    sum += nums[index];
                }
            } else {
                if (val % 2) {
                    sum -= nums[index] - val;
                }
            }
            res.push_back(sum);
        }
        return res;
    }
};
*/
