class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size(); 
        for (int i = 0; i < n; i++)
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i] - 1]);

        for (int i = 0; i < n; i++) 
            if (nums[i] != i + 1)
                return i + 1;

        return n + 1;
    }
};



class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> vec(n, 0);
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0 && nums[i] <= n) {
                vec[nums[i] - 1] = nums[i];
            }
        }

        for (int i = 0; i < n; i++) 
            if (vec[i] != i + 1)
                return i + 1;

        return n + 1;
    }
};


