#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<map>
using namespace std;


class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
		vector<vector<int>> nums(n, vector<int>(n));
		int sx = 0, sy = 0, loop = n / 2, mid = n / 2;
		int cnt = 1, offset = 1;
		int i, j;

		while (loop--) {
			i = sx;
			j = sy;

			for (j = sy; j < n - offset; j++) {
				nums[sx][j] = cnt++;
			}

			for (i = sx; i < n - offset; i++) {
				nums[i][j] = cnt++;
			}

			for (; j > sy; j--) {
				nums[i][j] = cnt++;
			}

			for (; i > sx; i--) {
				nums[i][j] = cnt++;
			}

			sx++;
			sy++;
			offset++;
		}

		if (n % 2) {
			nums[mid][mid] = cnt;
		}

		return nums;
    }
};

int main() {
	vector<int> nums = {10,1,2,7,6,1,5};
	int n = 4;

	Solution *sol;
	vector<vector<int>> y = sol->generateMatrix(n);
	for(auto x : y)
		for(auto k : x)
			cout << k << endl;

	return 0;
}
