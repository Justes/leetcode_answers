class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        if(!root->left || !root->right) {
            return !root->left ? right + 1 : left + 1;
        }
        root->left = NULL;
        root->right = NULL;
        return 1 + min(left, right);
    }
};
