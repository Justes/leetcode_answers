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
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res = 0;
        for(auto i : nums) {
            mp[i]++;
            if(mp.count(i + 1))
                res = max(res, mp[i] + mp[i + 1]);
            if(mp.count(i - 1))
                res = max(res, mp[i] + mp[i - 1]);
        }
        return res;
    }
};

int main()
{
    vector<int> vec = {1,3,2,2,5,2,3,7};
    Solution *sol = new Solution;
    int k = sol->findLHS(vec);
    cout << k << endl;
    return 0;
}

/*
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res = 0;
        for(int i = 0; i < nums.size(); i++) mp[nums[i]]++;

        for(auto [k, v] : mp) {
            if(mp.count(k + 1))
                res = max(res, v + mp[k + 1]);
        }
        return res;
    }
};
*/
