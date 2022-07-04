class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }

    void invert(TreeNode* root) {
        if(!root) return;
        invert(root->left);
        invert(root->right);
        swap(root->left, root->right);
    }
};
