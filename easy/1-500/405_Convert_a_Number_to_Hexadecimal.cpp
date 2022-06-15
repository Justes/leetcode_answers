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
    string toHex(int num) {
		if(num == 0) return "0";
		unsigned int n = num;

		string str = "";
		unordered_map<int, char> mp = {{0,'0'}, {1,'1'}, {2,'2'}, {3,'3'}, {4,'4'}, {5,'5'}, {6,'6'}, {7,'7'}, {8,'8'}, {9,'9'}, {10,'a'}, {11,'b'}, {12,'c'}, {13,'d'}, {14,'e'}, {15,'f'}};

		while(n > 0) {
			str = mp[n % 16] + str;
			n = n / 16;
		}

		return str;
    }
};

int main() {
	int num = 16;

	Solution *sol;
	string k = sol->toHex(num);
	cout << k << endl;

	return 0;
}
