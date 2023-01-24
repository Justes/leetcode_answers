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
    void backtracking(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& tmp, int i) {
        if(target == 0) {
            res.push_back(tmp);
            return;
        }

        while(i < candidates.size() && target - candidates[i] >= 0) {
            tmp.push_back(candidates[i]);
            backtracking(candidates, target - candidates[i], res, tmp, i);
            i++;
            tmp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> tmp;
        sort(candidates.begin(), candidates.end());
        backtracking(candidates, target, res, tmp, 0);
        return res;
    }
};

int main()
{
    vector<int> nums = {2,3,6,7};
    int target = 7;
    Solution *sol = new Solution;
    vector<vector<int>> y = sol->combinationSum(nums, target);
    for(auto x : y)
        for(auto k : x)
            cout << k << endl;
    return 0;
}
