class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sorted(nums, 0, nums.size() - 1);
    }

    TreeNode* sorted(vector<int>& nums, int f, int b) {
        if(f > b) return NULL;
        int mid = f + (b - f) / 2;
        TreeNode* tree = new TreeNode(nums[mid]);
        tree->left = sorted(nums, f, mid - 1);
        tree->right = sorted(nums, mid + 1, b);
        return tree;
    }
};
