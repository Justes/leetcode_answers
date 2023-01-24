class Solution {
public:
    void recursive(Node* root, vector<int>& res) {
        if(!root) return;
        for(auto child : root->children) {
            recursive(child, res);
        }
        res.push_back(root->val);
    }

    vector<int> postorder(Node* root) {
        vector<int> res;
        recursive(root, res);
        return res;
    }
};
