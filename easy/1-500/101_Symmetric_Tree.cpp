class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root->left == NULL && root->right == NULL) return true;
        return isSame(root->left, root->right);
    }

    bool isSame(TreeNode* p, TreeNode* q) {
        if(!p || !q) return p == q;
        return (p->val == q->val) && isSame(p->left, q->right) && isSame(p->right, q->left);
    }
};
