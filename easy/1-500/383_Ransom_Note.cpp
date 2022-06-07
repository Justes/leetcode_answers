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
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> vec(26, 0);
        for(char c : magazine) vec[c - 'a']++;
        for(char c : ransomNote) {
            if(--vec[c - 'a'] < 0) return false;
        }

        return true;
    }
};

int main() {
    string s1 = "aa";
    string s2 = "aab";

    Solution* sol;
    bool k = sol->canConstruct(s1, s2);
    cout << k << endl;

    return 0;
}

/*
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        for (int i = 0; i < ransomNote.size(); i++) {
            int p = magazine.find(ransomNote[i]);
            if(p == magazine.npos) return false;
            magazine.erase(p, 1);
        }

        return true;
    }
};
*/
