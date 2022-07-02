class Solution {
public:
    bool res = true;
    bool isBalanced(TreeNode* root) {
        depth(root);
        return res;
    }

    int depth(TreeNode *tree) {
        if(!res) return 0;
        if(!tree) return 0;
        int left = depth(tree->left);
        int right = depth(tree->right);
        if(abs(right - left) > 1) res = false;
        return 1 + max(left, right);
    }
};
