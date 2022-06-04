#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<unordered_set>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
		return n % 4 != 0;
    }
};

int main() {
	int n;
	cin >> n;
	
	Solution *sol;
	bool k = sol->canWinNim(n);
	cout << k << endl;
	/*
	for (auto x : k)
		cout << x << endl;
	*/
	return 0;
}
