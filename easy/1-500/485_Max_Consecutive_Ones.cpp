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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOne = 0, tmp = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i]) maxOne = max(maxOne, ++tmp);
            else tmp = 0;
        }
        return maxOne;
    }
};

int main()
{
    vector<int> num = {1, 1, 0, 1, 1, 1};
    Solution *sol;
    int k = sol->findMaxConsecutiveOnes(num);
    cout << k << endl;
    return 0;
}
