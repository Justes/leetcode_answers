class NumArray {
public:
    vector<int> n;
    NumArray(vector<int>& nums) {
        n.resize(nums.size());
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            n[i] = sum;
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return n[right];
        return n[right] - n[left - 1];
    }
};
