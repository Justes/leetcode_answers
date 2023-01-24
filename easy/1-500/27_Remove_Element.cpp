#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		int len = nums.size();
		if (len == 0) {
			return 0;
		}

		int tmp = 0;
		int b = len - 1;
		int k = len;


		for (int i=0; i < len; i++) {
			if (i <= b) {
				while ((nums[b] == val) && (k > 0)) {
					k--;
                    if (k == 0) {
						return 0;
					}
					b--;
				}

				if ((nums[i] == val) && (i < b)) {
					tmp = nums[b];
					nums[b] = nums[i];
					nums[i] = tmp;
				}
			}
		}

		return k;
    }
};

/*
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int f = 0, k = nums.size(), b = k - 1;
        while (f <= b) {
            while (f <= b && nums[b] == val) {
                b--;
                k--;
            }
            
            if (f <= b && nums[f] == val) {
                nums[f++] = nums[b--];
                k--;
            }
            if(nums[f] != val) f++;
        }

        return k;
    }
};


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0;
        for (int i = 0 ; i < nums.size(); i++) {
            if (val != nums[i]) {
                nums[slow++] = nums[i];
            }
        }

        return slow;
    }
};
*/


int main()
{
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;

    Solution * sol;
    int k = sol->removeElement(nums, val);

    cout << k << endl;

    return 0;
}
