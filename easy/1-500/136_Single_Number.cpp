#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int mini = -10000;
        int len = nums.size();
        map<int, int> a;


        for(int i = 0; i < len; i++) {
            if(a.count(nums[i]) != 0) {
                nums[a[nums[i]]] = mini;
                nums[i] = mini;
            } else {
                a[nums[i]] = i;
            }
        }

        for (int i = 0; i < len; i++) {
            if(nums[i] != mini) {
                return nums[i];
            }
        }
        return mini;
    }
};

int main() {
    vector<int> nums = {4,1,2,1,2};
    //vector<int> nums = {1};

    Solution *sol;
    int k = sol->singleNumber(nums);

    cout << k << endl;

    return 0;
}

/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(auto x:nums)
            ans ^= x;
        return ans;
    }
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        map<int, int> a;
        for(auto x:nums) {
            a[x]++;
        }
        for(auto z:a) {
            if(z.second == 1) {
                return z.first;
            }
        }

        return ans;
    }
};
*/
