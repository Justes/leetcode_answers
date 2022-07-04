class Solution {
public:

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        order(root, vec);
        return vec;
    }

    void order(TreeNode* root, vector<int> &vec) {
        if(!root) return;
        vec.push_back(root->val);
        order(root->left, vec);
        order(root->right, vec);
    }
};
