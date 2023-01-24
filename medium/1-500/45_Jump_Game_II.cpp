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
    int jump(vector<int>& nums) {
        int res = 0, end = 0, maxPos = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            maxPos = max(maxPos, nums[i] + i);
            if (i == end) {
                end = maxPos;
                res++;
            }
        }
        return res;
    }
};


int main()
{
    vector<int> num = {2,3,3,1,4,1};
    Solution *sol = new Solution;
    int k = sol->jump(num);
    cout << k << endl;
}
