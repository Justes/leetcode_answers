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
        int k = uf[x] == x ? x : (uf[x] = find(uf[x]));
        cout << "k:" << k << endl;
        return k;
    }

    bool equationsPossible(vector<string>& equations) {
        for (int i = 0; i < 26; ++i) uf[i] = i;

        for (auto e : equations) {
            if (e[1] == '=') uf[find(e[0] - 'a')] = find(e[3] - 'a');
        }
        cout << "---" << endl;

        //for (auto x : uf) cout << x << endl;

        for (auto e : equations) {
            if (e[1] == '!' && find(e[0] - 'a') == find(e[3] - 'a')) return false;
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
