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
    int firstUniqChar(string s) {
		vector<int> vec(26, 0);
		for(auto c : s) vec[c - 'a']++;
		for(int i = 0; i < s.size(); i++) {
			if(vec[s[i] - 'a'] == 1) return i;
		}
		return -1;
    }
};

int main() {
	string s = "lll";

	Solution *sol;
	int k = sol->firstUniqChar(s);
	cout << k << endl;
	/*
	for (auto x : k)
		cout << x << endl;
	*/

	return 0;
}

/*
class Solution {
public:
    int firstUniqChar(string s) {
		int index = 0;
		map<int, int> mp;
		unordered_map<char, int> mp2;

		for (int i = 0; i < s.size(); i++) {
			if(mp2.count(s[i]) == 0) {
				mp2[s[i]] = i;
			}
			++mp[mp2[s[i]]];
		}

		map<int, int>::iterator it;
		for (it = mp.begin(); it != mp.end(); it++) {
			if(it->second == 1) {
				index = it->first;
				return index;
			}
		}

		return -1;
    }
};
*/
