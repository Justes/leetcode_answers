#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;


class Solution {
public:
    string convertToTitle(int columnNumber) {
		string s;
		char c;

		while(columnNumber) {
			columnNumber--;
			c = 'A' + columnNumber % 26;
			s = c + s;
			columnNumber /= 26;
		}

		return s;
    }
};

int main() {

	int a;
	cin >> a;

    Solution* sol;
    string str = sol->convertToTitle(a);

	cout << str << endl;

    return 0;
}
