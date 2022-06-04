#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<unordered_set>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
		while(n > 2) {
			if(n % 3) return false;
			n /= 3;
		}
		return n == 1;
    }
};

int main() {
	int n;
	cin >> n;
	
	Solution *sol;
	bool k = sol->isPowerOfThree(n);
	cout << k << endl;
	/*
	for (auto x : k)
		cout << x << endl;
	*/
	return 0;
}
