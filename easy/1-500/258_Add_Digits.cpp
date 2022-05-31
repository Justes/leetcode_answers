#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
		while(num > 9) {
			int sum = 0;
			while(num) {
				sum += num % 10;
				num /= 10;
			}
			num = sum;
		}

		return num;
    }
};

int main() {
	//vector<int> nums = {2,1,5,6,2,3};
	int nums;
	cin >> nums;
	
	Solution *sol;
	int k = sol->addDigits(nums);
	cout << k << endl;
	return 0;
}
