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
		while(n > 3) {
			if(n % 4) return false;
			n /= 4;
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
