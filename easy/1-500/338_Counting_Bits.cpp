#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

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
