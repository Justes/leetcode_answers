class Solution {
public:
    void left(TreeNode* root, int &sum, bool isLeft) {
        if(!root) return;
        if(!root->left && !root->right && isLeft) sum += root->val;
        left(root->left, sum, true);
        left(root->right, sum, false);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        left(root->left, sum, true);
        left(root->right, sum, false);
        return sum;
    }
};
