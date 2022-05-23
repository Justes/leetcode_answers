#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;


class Solution {
public:
    int titleToNumber(string columnTitle) {
		int len = columnTitle.length();
		int k = 0, j = 0;
		for(int i = len - 1; i >= 0; i--) {
			int n = 1;
			j = len - 1 - i;
			while(j--) {
				n *= 26; 
			}
			k +=  (columnTitle[i] - 'A' + 1) * n;
		}

		return k;
    }
};

int main() {
	string str;
	cin >> str;

    Solution* sol;
    int k = sol->titleToNumber(str);

	cout << k << endl;

    return 0;
}
