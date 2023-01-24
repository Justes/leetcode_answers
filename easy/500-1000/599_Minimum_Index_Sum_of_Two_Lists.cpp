class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> mp;
        int mn = 2000;
        vector<string> res;
        for(int i = 0; i < list1.size(); i++) mp[list1[i]] = i;
        for(int i = 0; i < list2.size(); i++) {
            if(mp.count(list2[i])) {
                int k = mp[list2[i]] + i;
                if(k < mn) {
                    mn = k;
                    res.clear();
                    res.push_back(list2[i]);
                } else if(k == mn) {
                    res.push_back(list2[i]);
                }
            }
        }

        return res;
    }
};
