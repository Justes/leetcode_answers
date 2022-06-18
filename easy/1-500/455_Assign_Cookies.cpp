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
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int k = 0, j = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for(int i = 0; i < s.size(); i++) {
            if(j < g.size() && s[i] >= g[j]) {
                k++;
                j++;
            } else {
                break;
            }
        }
        return k;
    }
};

int main() {
    vector<int> g = {1,1,2,3};
    vector<int> s = {2,2};

    Solution* sol;
    int k = sol->findContentChildren(g, s);
    cout << k << endl;

    return 0;
}
