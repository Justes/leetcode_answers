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
#include <cstring>
#include <sstream>
using namespace std;

class Solution {
public:

    int uf[26];

    int find(int x) {
        if (x != uf[x]) uf[x] = find(uf[x]);
        return uf[x];
    }

    bool equationsPossible(vector<string>& equations) {
        for (int i = 0; i < 26; i++) uf[i] = i;

        for (auto eq : equations) {
            if (eq[1] == '=') {
                uf[find(eq[0] - 'a')] = find(eq[3] - 'a');
            }
        }

        for (auto eq : equations) {
            if (eq[1] == '!' && find(eq[0] - 'a') == find(eq[3] - 'a')) {
                return false;
            }
        }
        return true;
    }
};


int main()
{
    vector<string> n = {"a==b", "a!=b"};
    Solution *sol = new Solution;
    bool k = sol->equationsPossible(n);
    cout << k << endl;
}
