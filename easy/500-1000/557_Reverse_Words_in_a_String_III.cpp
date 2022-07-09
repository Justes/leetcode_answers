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
    string reverseWords(string s) {
		int i = 0, j = 0, k = 0, len = s.size();
		while(j < len) {
			while(s[j] != ' ' && j < len) j++;
			k = j - 1;
			while(i < k) swap(s[i++], s[k--]);
			j++;
			i = j;
		}

		return s;
    }
};

int main() {
	string s = "Let's take LeetCode contest";

	Solution *sol;
	string k = sol->reverseWords(s);
	cout << k << endl;

	return 0;
}
