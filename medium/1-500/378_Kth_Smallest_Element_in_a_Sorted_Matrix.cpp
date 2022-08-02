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
	int kthSmallest(vector<vector<int>>& matrix, int k) {
		int n = matrix.size();
		int f = matrix[0][0], b = matrix[n - 1][n - 1];
		while (f < b) {
			int mid = f + (b - f) / 2;
			int cnt = 0;
			for (int i = 0; i < n; i++) {
				int pos = upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
				cnt += pos;
			}
			if (cnt < k) f = mid + 1;
			else b = mid;
		}
		return f;
	}
};

int main()
{
    vector<vector<int>> mat = {{1,5,9},{10,11,13},{12,13,15}};
    int t = 8;
    Solution *sol = new Solution;
    int k = sol->kthSmallest(mat, t);
    cout << k << endl;
    return 0;
}
