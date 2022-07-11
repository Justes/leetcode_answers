class Solution {
public:
    map<int, int> mp;

    void traverse(TreeNode* root) {
        if(!root) return;
        mp[root->val]++;
        traverse(root->left);
        traverse(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        traverse(root);
        int mode = 0;
        vector<int> res;
        for(auto m : mp) {
            if(m.second > mode) {
                mode = m.second;
            }
        }

        for(auto m : mp) {
            if(m.second == mode) {
                res.push_back(m.first);
            }
        }

        return res;
    }
};
