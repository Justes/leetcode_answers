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
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.empty()) return res;

        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i = 0; i < n; i++) {
            long long int target3 = target - nums[i];

            for(int j = i + 1; j < n; j++) {
                long long int target2 = target3 - nums[j];
                int f = j + 1, b = n - 1;

                while(f < b) {
                    int two_sum = nums[f] + nums[b];
                    if(two_sum < target2)
                        f++;
                    else if(two_sum > target2)
                        b--;
                    else {
                        vector<int> quad = {nums[i], nums[j], nums[f], nums[b]};
                        res.push_back(quad);
                        while(f < b && nums[f] == quad[2]) f++;
                        while(f < b && nums[b] == quad[3]) b--;
                    }
                }
                while(j + 1 < n && nums[j + 1] == nums[j]) j++;
            }
            while(i + 1 < n && nums[i + 1] == nums[i]) i++;
        }
        return res;
    }
};

int main()
{
    vector<int> num = {1, 0, -1, 0, -2, 2};
    int target = 0;
    Solution *sol = new Solution;
    vector<vector<int>> x = sol->fourSum(num, target);
    for(auto y : x)
        for(auto k : y)
            cout << k << endl;
    return 0;
}

/*
// overflow, TLE
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> path;
        dfs(res, nums, 0, target, 0, 0, path);
        return res;
    }

    void dfs(vector<vector<int>> &res,vector<int> &nums, int pos, int target, int cnt, long sum, vector<int> &path) {
        if(cnt == 4) {
            if(sum == target) res.push_back(path);
            return;
        }

        for(int i = pos; i < nums.size(); i++) {
            if(i != pos && nums[i] == nums[i - 1]) continue;
            if(sum + nums[i] + (3 - cnt) * nums[nums.size() - 1] < target) continue;
            if(sum + (4 - cnt) * nums[i] > target) break;
            path.push_back(nums[i]);
            dfs(res, nums, i + 1, target, cnt + 1, sum + nums[i], path);
            path.pop_back();
        }
    }
};
*/
