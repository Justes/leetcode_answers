#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
    int firstBadVersion(int n) {
		int f = 0, b = n, p = 0;
		while(f <= b) {
			int mid = f + (b - f) / 2;
			if(isBadVersion(mid)) {
				p = mid;
				b = mid - 1;
			} else {
				f = mid + 1;
			}
		}

		return p;
    }

	bool isBadVersion(int version) {
		if (version >= 8) return true;
		return false;
	}
};

int main() {
	int nums;
	cin >> nums;
	
	Solution *sol;
	int k = sol->firstBadVersion(nums);
	cout << k << endl;
	return 0;
}
