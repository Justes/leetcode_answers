#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <deque>
#include <stack>
#include <cmath>
using namespace std;

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> seen;
        deque<char> q;

        for (auto c: s) {
            q.push_back(c);
            if (q.size() == k) {
                seen.insert({ q.begin(), q.end() });
                q.pop_front();
            }
        }

        return seen.size() == 1 << k;
    }
};


int main() {
    string s = "00110110";
    int k = 2;

    Solution* sol;
    bool b = sol->hasAllCodes(s, k);
    cout << b << endl;

    return 0;
}

/*
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k > s.size()) return false;

        unordered_set<string> sset;

        for (int i = 0; i <= s.size() - k; i++) {
            sset.insert(s.substr(i, k));
        }

        return sset.size() == pow(2, k);
    }
};
*/
