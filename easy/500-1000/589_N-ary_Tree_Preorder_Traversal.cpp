class Solution {
public:
    void recursive(Node* root, vector<int>& result) {
        if(!root) return;
        result.push_back(root->val);
        for(auto child : root->children) {
            recursive(child, result);
        }
    }

    vector<int> preorder(Node* root) {
        vector<int> res;
        recursive(root, res);
        return res;
    }
};
