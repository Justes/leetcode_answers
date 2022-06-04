#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

// 这种做法就是每次把最右侧的1置为0, 然后记录次数
// 例1101
// 1101 1100, n = 1100, 1
// 1100 1011, n = 1000, 2
// 1000 0111, n = 0000, 3
// 结束 count = 3

class Solution {
public:
    vector<int> countBits(int n) {
		vector<int> vec;
		for (int i = 0; i <= n; i++) {
			int count = 0;
			int j = i;
			while(j) {
				j = j & (j - 1);
				count++;
			}
			vec.push_back(count);
		}
		return vec;
    }
};

int main() {
	int nums;
	cin >> nums;
	
	Solution *sol;
	vector<int> k = sol->countBits(nums);
	for (auto x : k)
		cout << x << endl;
	return 0;
}
