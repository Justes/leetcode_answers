#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
		if (n <= 0) return false;
		for (int i = 2; i < 6; i++) {
			while(n % i == 0) n /= i;
		}

		return n == 1;
    }
};

int main() {
	int nums;
	cin >> nums;
	
	Solution *sol;
	bool k = sol->isUgly(nums);
	cout << k << endl;
	return 0;
}
