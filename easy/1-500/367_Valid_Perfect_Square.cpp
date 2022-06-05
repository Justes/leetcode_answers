#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<unordered_set>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
		long r = num;
		while(r > num / r)
		  r = (r + num / r) / 2;
		return r*r == num;
    }
};

int main() {
	int n;
	cin >> n;
	
	Solution *sol;
	bool k = sol->isPerfectSquare(n);
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
    bool isPerfectSquare(int num) {
		int i = 1;
		while(num > 0) {
			num -= i;
			i += 2;
			if(!num) return true;
		}
		return false;
    }
};
*/
