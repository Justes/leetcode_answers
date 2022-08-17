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
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> vec = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> st;
        for(auto s : words) {
            string tmp = "";
            for(auto c : s) {
                tmp += vec[c - 'a'];
            }
            st.insert(tmp);
        }

        return st.size();
    }
};


int main()
{
    vector<string> s = {"gin", "zen", "gig", "msg"};
    Solution *sol = new Solution;
    int k = sol->uniqueMorseRepresentations(s);
    cout << k << endl;
    return 0;
}

