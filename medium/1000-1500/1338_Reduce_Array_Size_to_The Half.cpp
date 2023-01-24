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
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        vector<int> vec;
        int res = 0, cnt = 0, i = 0;
        for(auto x : arr) mp[x]++;
        for(auto x : mp) vec.push_back(x.second);
        sort(vec.begin(), vec.end(), greater<int>());
        while(cnt < arr.size() / 2) {
            cnt += vec[i++];
            res++;
        }
        return res;
    }
};


int main()
{
    vector<int> arr = {3,3,3,3,5,5,5,2,2,7};
    Solution *sol = new Solution;
    int k = sol->minSetSize(arr);
    cout << k << endl;
    return 0;
}

