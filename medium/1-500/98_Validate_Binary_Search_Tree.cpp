class Solution {
public:
    bool recurse(TreeNode* root, TreeNode* minNode, TreeNode* maxNode) {
        if(!root) return true;
        if(minNode && root->val <= minNode->val || maxNode && root->val >= maxNode->val)
            return false;
        return recurse(root->left, minNode, root) && recurse(root->right, root, maxNode);
    }

    bool isValidBST(TreeNode* root) {
        return recurse(root, NULL, NULL);
    }
};

class Solution {
public:
    vector<int> vec;
    void inorder(TreeNode *root) {
        if(!root) return;
        inorder(root->left);
        vec.push_back(root->val);
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        inorder(root);
        for(int i = 1; i < vec.size(); i++) {
            if(vec[i] <= vec[i - 1]) return false;
        }
        return true;
    }
};
