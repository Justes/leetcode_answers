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
    string pushDominoes(string dominoes) {
        string ans = "", s = dominoes;
        int n = s.size(), cnt = 1;
        char prev = '.';
        vector<int> l(n, 0), r(n, 0);

        for (int i = 0; i < n; i++) {
            if (s[i] == 'R') {
                prev = 'R';
                cnt = 1;
                continue;
            } else if (s[i] == 'L') prev = 'L';

            if (prev == 'R' && s[i] == '.') r[i] = cnt++;
        }

        prev = '.';
        cnt = 1;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'L') {
                prev = 'L';
                cnt = 1;
                continue;
            } else if(s[i] == 'R') prev = 'R';

            if (prev == 'L' && s[i] == '.') l[i] = cnt++;
        }

        for (int i = 0; i < n; i++) {
            if (!l[i] && !r[i]) ans += s[i];
            else if(!l[i]) ans += 'R';
            else if(!r[i]) ans += 'L';
            else if(l[i] == r[i]) ans += '.';
            else if(l[i] > r[i]) ans += 'R'; // minimum closer
            else ans += 'L';
        }

        return ans;
    }
};

int main()
{
    string n = ".L.R...LR..L..";
    Solution *sol = new Solution;
    string k = sol->pushDominoes(n);
    cout << k << endl;
}

    /*
    int find(int x) {
        return uf[x] == x ? x : (uf[x] = find(uf[x]));
    }
    */
