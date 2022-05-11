#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int maxSubArray(vector<int>& nums) {
        int maxSum = -10000, sum = -10000;
        int len = nums.size();

        for (int i = 0; i < len; i++) {
            sum = max(nums[i], sum + nums[i]);
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};

int main()
{
    vector<int> digits = {-2,1,-3,4,-1,2,1,-5,4};

    Solution * sol;
    int k = sol->maxSubArray(digits);

    cout << k << endl;

    return 0;
}
