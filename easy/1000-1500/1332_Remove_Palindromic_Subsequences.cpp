#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<unordered_set>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int removePalindromeSub(string s) {
		int a = 0, b = s.size() - 1;
		while(a < b) {
			if(s[a++] != s[b--]) return 2;
		}

		return 1;
    }
};

int main() {
	string s = "abb";
	Solution *sol;
	int k = sol->removePalindromeSub(s);
	cout << k << endl;

	return 0;
}
