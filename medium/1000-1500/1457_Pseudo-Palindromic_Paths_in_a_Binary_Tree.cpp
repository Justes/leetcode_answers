/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int res = 0;
    unordered_map<int, int> mp;

    void recurse(TreeNode* root) {
        if(!root) return;
        mp[root->val]++;

        if(!root->left && !root->right) {
            int odd = 0;
            for(auto m : mp) {
                if(m.second % 2 == 1) {
                    odd++;
                }
            }
            if (odd <= 1) {
                res++;
            }
        }

        recurse(root->left);
        recurse(root->right);
        mp[root->val]--;
    }

    int pseudoPalindromicPaths (TreeNode* root) {
        recurse(root);
        return res;
    }
};
