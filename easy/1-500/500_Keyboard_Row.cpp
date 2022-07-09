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
    vector<string> findWords(vector<string>& words) {
		string r1 = "QWERTYUIOPqwertyuiop", r2 = "ASDFGHJKLasdfghjkl", r3 = "ZXCVBNMzxcvbnm";
		int a = 0, b = 0, c = 0;
		vector<string> str;
		for(auto i : words) {
			for(auto j : i) {
				if(r1.find(j) != string::npos) a++;
				if(r2.find(j) != string::npos) b++;
				if(r3.find(j) != string::npos) c++;
			}
			if(i.size() == max({a, b, c})) str.push_back(i);
			a = b = c = 0;
		}

		return str;
    }
};

int main() {
	vector<string> nums = {"Hello", "Alaska", "Dad", "Peace"};

	Solution *sol;
	vector<string> k = sol->findWords(nums);
	for(auto x: k)
		cout << x << endl;

	return 0;
}
