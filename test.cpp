#include <iostream>
#include <vector>
using namespace std;

// 46
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > result;

	    permuteRecursive(nums, 0, result);
	    return result;
    }

    void permuteRecursive(vector<int> &num, int begin, vector<vector<int> > &result) {
		if (begin >= num.size()) {
		    // one permutation instance
		    for (auto x : num)
                cout << x << endl;
            cout << "------" << endl;
		    result.push_back(num);
		    return;
		}

		for (int i = begin; i < num.size(); i++) {
            cout << "begin:" << begin << " i:" << i << endl;
		    swap(num[begin], num[i]);
		    permuteRecursive(num, begin + 1, result);
		    // reset
		    swap(num[begin], num[i]);
		}
    }
};

int main() {
    vector<int> nums = {1, 2, 3};

    Solution* sol;
    vector<vector<int>> vec = sol->permute(nums);

    return 0;
}
