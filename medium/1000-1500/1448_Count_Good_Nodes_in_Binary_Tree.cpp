class Solution {
public:
    int cnt = 0;

    int goodNodes(TreeNode* root) {
        recursive(root, root->val);
        return cnt;
    }

    void recursive(TreeNode *root, int val) {
        if(!root) return;
        if(root->val >= val) cnt++;
        recursive(root->left, max(root->val, val));
        recursive(root->right, max(root->val, val));
    }
};
