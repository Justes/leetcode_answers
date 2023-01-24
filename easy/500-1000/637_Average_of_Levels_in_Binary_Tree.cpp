class Solution {
public:
    void dfs(TreeNode *root, unordered_map<int, pair<int, long>>& mp, int level) {
        if(!root) return;
        mp[level] = {mp[level].first + 1, mp[level].second + root->val};
        dfs(root->left, mp, level + 1);
        dfs(root->right, mp, level + 1);
    }

    vector<double> averageOfLevels(TreeNode* root) {
        unordered_map<int, pair<int, long>> mp;
        dfs(root, mp, 0);
        vector<double> res(mp.size());

        for(int i = 0; i < res.size(); i++) {
            res[i] = (double)mp[i].second / mp[i].first;
        }
        return res;
    }
};
