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
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
	    permuteRecursive(nums, 0, result);
	    return result;
    }

    void permuteRecursive(vector<int> &num, int begin, vector<vector<int> > &result) {
		if (begin >= num.size()) {
		    // one permutation instance
		    result.push_back(num);
		    return;
		}

		for (int i = begin; i < num.size(); i++) {
		    swap(num[begin], num[i]);
		    permuteRecursive(num, begin + 1, result);
		    // reset
		    swap(num[begin], num[i]);
		}
    }
};

int main()
{
    vector<int> n = {1, 2, 3};
    Solution *sol;
    vector<vector<int>> k = sol->permute(n);
    for(auto y : k)
        for(auto x : y)
            cout << x << endl;

    return 0;
}
