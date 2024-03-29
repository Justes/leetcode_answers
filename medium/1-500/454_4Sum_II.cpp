class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> mp;
        int cnt = 0;
        for (auto a : nums1) {
            for (auto b : nums2) {
                mp[a + b]++;
            }
        }

        for (auto c : nums3) {
            for (auto d : nums4) {
                if (mp.find(-(c + d)) != mp.end()) {
                    cnt += mp[-(c + d)];
                }
            }
        }

        return cnt;
    }
};
