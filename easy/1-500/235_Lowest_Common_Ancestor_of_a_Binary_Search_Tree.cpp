class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int mn = min(p->val, q->val);
        int mx = max(p->val, q->val);
        while(root) {
            if(root->val > mx) {
                root = root->left;
            } else if(root->val < mn) {
                root = root->right;
            } else {
                return root;
            }
        }
        return nullptr;
    }
};
