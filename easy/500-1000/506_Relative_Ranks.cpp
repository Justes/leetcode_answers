#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <algorithm>
#include <deque>
#include <stack>
#include <cmath>
#include <bitset>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> str;
        vector<int> vec = score;
        unordered_map<int, int> mp;

        sort(score.begin(), score.end(), greater<int>());
        for(int i = 0; i < score.size(); i++) {
            mp[score[i]] = i;
        }

        for(int i = 0; i < vec.size(); i++) {
            if(mp[vec[i]] == 0) {
                str.push_back("Gold Medal");
            } else if(mp[vec[i]] == 1) {
                str.push_back("Silver Medal");
            } else if(mp[vec[i]] == 2) {
                str.push_back("Bronze Medal");
            } else {
                str.push_back(to_string(mp[vec[i]] + 1));
            }
        }

        return str;
    }
};

int main()
{
    vector<int> num = {10,3,8,9,4};
    Solution *sol;
    vector<string> k = sol->findRelativeRanks(num);
    for(auto x : k)
        cout << x << endl;
    return 0;
}
