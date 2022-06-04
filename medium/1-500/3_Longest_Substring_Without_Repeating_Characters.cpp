#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		int len = s.size(), f = 0, b = 0, maxLen = 0;
		unordered_set<char> st;

		while(f < len && b < len) {
			if(st.count(s[b])) {
				st.erase(s[f++]);
			} else {
				st.insert(s[b++]);
				maxLen = max(maxLen, b - f);
			}
		}

		return maxLen;
    }
};

int main() {
	string nums = "abcababcdb";
	
	Solution *sol;
	int k = sol->lengthOfLongestSubstring(nums);
	cout << k << endl;
	/*
	for (auto x : k)
		cout << x << endl;
	*/
	return 0;
}
