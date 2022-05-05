#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
		int len = s.length();
		string ss = "";

		for (int i=0; i<len; i++) {
			if((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
				if(s[i] >= 'A' && s[i] <= 'Z') {
					ss += s[i] + 32;
				} else {
					ss += s[i];
				}
			}
		}

		int slen = ss.length();
		for (int i=0; i < slen; i++) {
			if (ss[i] != ss[slen - 1 - i]) {
				return false;
			}
		}

		return true;
    }
};

int main() {
	string s = "A man, a plan, a canal: Panama";

	Solution *sol = new Solution();
	bool b = sol->isPalindrome(s);
	cout << b << endl;
	return 0;
}
