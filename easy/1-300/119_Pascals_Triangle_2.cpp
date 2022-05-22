#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;


class Solution {
public:
    vector<int> getRow(int rowIndex) {
		vector<int> nums(rowIndex + 1, 0);
		nums[0] = 1;

		for (int i = 1; i < rowIndex + 1; i++) {
			for (int j = i; j >= 1; j--) {
				nums[j] += nums[j - 1];
			}
		}
		return nums;
    }
};

int main() {

	int a;
	cin >> a;

    Solution* sol;
    vector<int> num = sol->getRow(a);

	for(auto x:num)
		cout << x << endl;

    return 0;
}
