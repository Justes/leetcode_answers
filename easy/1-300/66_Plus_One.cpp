#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();

        int num = digits[len - 1] + 1;
        digits[len - 1] = num;
        if(num == 10) {
            for (int i = len - 1; i > 0; i--) {
                if (digits[i] == 10) {
                    digits[i] = 0;
                    if (i >= 1) {
                        digits[i - 1] = digits[i - 1] + 1;
                    }
                }
            }

            if(digits[0] == 10) {
                digits[0] = 0;
                digits.insert(digits.begin(), 1);
            }

        }

        return digits;
    }
};

int main()
{
    vector<int> digits = {9, 9, 9};

    Solution * sol;
    vector<int> res = sol->plusOne(digits);

    for (auto iter = res.begin(); iter != res.end(); iter++) {
        cout << *iter << endl;
    }

    return 0;
}
