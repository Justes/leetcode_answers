class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = nums.size(), k = INT32_MAX, f = 0, sum = 0;
        for (int i = 0; i < len; i++) {
            sum += nums[i];
            while (sum >= target) {
                k = min(k, i - f + 1);
                sum -= nums[f++];
            }
        }
        return k == INT32_MAX ? 0 : k;
    }
};
