#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
    string addDigits(string s, int k) {
		int len = s.length();
		string ss;

		while(len > k) {
			int sum = 0;
			ss = "";
			for (int i = 0; i < len; i++) {
				if(i != 0 && i % k == 0) {
					ss += to_string(sum);
					sum = 0;
				}
				sum += s[i] - '0';
			}

			ss += to_string(sum);
			len = ss.length();
			s = ss;
		}

		return s;
    }
};

int main() {
	//string s = "00000000";
	string s = "11111222223";
	int nums = 3;
	
	Solution *sol;
	string k = sol->addDigits(s, nums);
	cout << k << endl;
	return 0;
}
