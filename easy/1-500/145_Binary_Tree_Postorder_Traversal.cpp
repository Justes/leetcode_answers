class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vec;
        order(root, vec);
        return vec;
    }

    void order(TreeNode* root, vector<int> &vec) {
        if(!root) return;
        order(root->left, vec);
        order(root->right, vec);
        vec.push_back(root->val);
    }
};
