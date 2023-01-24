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
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n = arr.size(), mod = pow(10, 9) + 7;
        long res = 0;
        unordered_map<int, long> mp;
        sort(arr.begin(), arr.end());
        for(int i = 0; i < n; i++) {
            mp[arr[i]] = 1;
            for(int j = 0; j < i; j++) {
                if(arr[i] % arr[j] == 0) {
                    mp[arr[i]] = (mp[arr[i]] + mp[arr[j]] * mp[arr[i] / arr[j]]) % mod;
                }
            }
            res = (res + mp[arr[i]]) % mod;
        }
        return res;
    }
};


int main()
{
    vector<int> num = {2, 4};
    Solution *sol = new Solution;
    int k = sol->numFactoredBinaryTrees(num);
    cout << k << endl;
    return 0;
}

