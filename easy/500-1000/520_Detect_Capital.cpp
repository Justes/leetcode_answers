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
    bool detectCapitalUse(string word) {
        for(int i = 1; i < word.size(); i++) {
            if((isupper(word[1]) != isupper(word[i])) || (islower(word[0])) && isupper(word[i])) return false;
        }
        return true;
    }
};


int main()
{
    string word = "hEllo";
    Solution *sol = new Solution;
    bool k = sol->detectCapitalUse(word);
    cout << k << endl;
    return 0;
}

