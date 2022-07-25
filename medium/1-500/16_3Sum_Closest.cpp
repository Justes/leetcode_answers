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
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = nums[0] + nums[1] + nums[2];
        int n = nums.size();
        for(int i = 0; i < n - 2; i++) {
            int j = i + 1, k = n - 1;
            while(j < k) {
                int num = nums[i] +nums[j] + nums[k];
                if(abs(num - target) < abs(res - target)) res = num;
                if(num < target) j++;
                else k--;
            }
        }
        return res;
    }
};

int main()
{
    vector<int> num = {-1,2,1,-4};
    int target = 1;
    Solution *sol;
    int k = sol->threeSumClosest(num, target);
    cout << k << endl;
    return 0;
}
