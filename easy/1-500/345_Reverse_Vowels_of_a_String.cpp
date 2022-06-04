#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<unordered_set>
#include<unordered_map>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
		unordered_set<char> st = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
		int i = 0, j = s.size() - 1, f = -1, b = -1; 
		while(i < j) {
			if(st.count(s[i])) {
				f = i;
			} else {
				i++;
				f = -1;
			}

			if(st.count(s[j])) {
				b = j; 
			} else {
				j--;
				b = -1;
			}

			if(f != -1 && b != -1) {
				int tmp = s[f];
				s[f] = s[b];
				s[b] = tmp;
				f = -1;
				b = -1;
				i++;
				j--;
			}
		}

		return s;
    }
};

int main() {
	string n = "hello";
	
	Solution *sol;
	string k = sol->reverseVowels(n);
	cout << k << endl;
	/*
	for (auto x : k)
		cout << x << endl;
	*/
	return 0;
}
