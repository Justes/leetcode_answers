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
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> st(candyType.begin(), candyType.end());
        int n = candyType.size() / 2;
        return n > st.size() ? st.size() : n;
    }
};

int main()
{
    vector<int> vec = {1,1,2,2,3,3};
    Solution *sol = new Solution;
    int k = sol->distributeCandies(vec);
    cout << k << endl;
    return 0;
}
