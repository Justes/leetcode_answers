#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> vstr;
        string str;
        int len = nums.size();
        int f = 0, b = 0;
        while(b < len) {
            if(b + 1 == len || (nums[b] + 1 != nums[b + 1])) {
                if(b - f >= 1) {
                    str = to_string(nums[f]) + "->" + to_string(nums[b]);
                } else {
                    str = to_string(nums[f]);
                }
                vstr.push_back(str);
                f = b + 1;
            }
            b++;
        }

        return vstr;
    }
};

int main() {
    vector<int> vec = {0,2,3,4,6,8,9};

    Solution* sol;
    vector<string> str = sol->summaryRanges(vec);

    for(auto x:str)
        cout << x << endl;

    return 0;
}
