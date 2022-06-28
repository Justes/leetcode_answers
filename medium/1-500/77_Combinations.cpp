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

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> track;
        backtrack(1, n, k, res, track);
        return res;
    }

    void backtrack(int start, int n, int k, vector<vector<int>> &res, vector<int> track) {
        if (k == track.size()) {
            res.push_back(track);
            return;
        }

        for (int i = start; i <= n; i++) {
            track.push_back(i);
            backtrack(i + 1, n, k, res, track);
            track.pop_back();
        }
    }
};

int main()
{
    int n = 3, k = 2;
    Solution *sol;
    vector<vector<int>> grid = sol->combine(n, k);
    for (auto x : grid)
        for(auto k : x)
            cout << k << endl;

    return 0;
}


/*
class Solution {
public:
	vector<vector<int>> combine(int n, int k) {
		vector<vector<int>> result;
		vector<int> p(k, 0);
		int i = 0;

		while (i >= 0) {
			p[i]++;
			if (p[i] > n) {
			    i--;
            } else if (i == k - 1) {
                result.push_back(p);
            } else {
			    i++;
			    p[i] = p[i - 1];
			}
		}

		return result;
	}
};
*/
