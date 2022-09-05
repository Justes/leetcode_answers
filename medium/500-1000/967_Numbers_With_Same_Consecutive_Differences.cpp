class Solution {
public:
    vector<int> res;
    void dfs(int len, int val, int prev, int n, int k) {
        if (len == n) {
            res.push_back(val);
            return;
        }

        for (int i = 0; i < 10; i++) {
            if (abs(i - prev) == k) {
                dfs(len + 1, val * 10 + i, i, n, k);
            }
        }
    }

    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i = 1; i < 10; i++) {
            dfs(1, i, i, n, k);
        }
        return res;
    }
};
