#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++) {
            if(++mp[nums[i]] > 1) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    vector<int> vec = {1,2,3,1};

    Solution* sol;
    bool k = sol->containsDuplicate(vec);

	cout << k << endl;

    return 0;
}
