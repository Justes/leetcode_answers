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
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> cnt, tails;
        for(int &i : nums) cnt[i]++;

        for(int &i : nums){
            if(!cnt[i]) continue;
            cnt[i]--;
            if(tails[i-1] > 0){
                tails[i-1]--;
                tails[i]++;
            } else if(cnt[i+1] && cnt[i+2]){
                cnt[i+1]--;
                cnt[i+2]--;
                tails[i+2]++;
            } else return false;
        }
        return true;
    }
};


int main()
{
    vector<int> arr = {1,2,3,3,4,4,5,5};
    Solution *sol = new Solution;
    bool k = sol->isPossible(arr);
    cout << k << endl;
    return 0;
}

