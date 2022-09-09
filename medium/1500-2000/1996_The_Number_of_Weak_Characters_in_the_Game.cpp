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
#include <map>
using namespace std;

class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b) {
        if(a[0] == b[0]) {
            return a[1] > b[1];
        }
        return a[0] < b[0];
    }

    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), comp);
        int cnt = 0, mn = INT_MIN;
        for(int i = properties.size() - 1; i >= 0; i--) {
            if(properties[i][1] < mn) cnt++;
            mn = max(properties[i][1], mn);
        }
        return cnt;
    }
};

int main()
{
    vector<vector<int>> nums = {{1,1},{2,1},{2,2},{1,2}};
    Solution *sol = new Solution;
    int k = sol->numberOfWeakCharacters(nums);
    cout << k << endl;
}
