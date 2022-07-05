class Solution {
public:
    void path(TreeNode* tree, string s, vector<string> &vec) {
        if(!tree) return;
        s += to_string(tree->val);
        if(!tree->left && !tree->right) vec.push_back(s);
        s += "->";
        path(tree->left, s, vec);
        path(tree->right, s, vec);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> vec;
        string s;
        path(root, s, vec);
        return vec;
    }
};
