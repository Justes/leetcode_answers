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
    bool repeatedSubstringPattern(string s) {
         return (s + s).find(s, 1) < s.size();
    }
};

int main()
{
    string num = "abaaba";
    Solution *sol;
    bool k = sol->repeatedSubstringPattern(num);
    cout << k << endl;
    return 0;
}
