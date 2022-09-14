#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <algorithm>
#include <deque>
#include <stack>
#include <cmath>
#include <bitset>
#include <map>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() - 1, p = -1, pv = 0;

        for(int i = n - 1; i >= 0; i--){
            if(nums[i] < nums[i + 1]) {
                p = i;
                pv = nums[i];
                break;
            }
        }

        if(p == -1) {
            reverse(nums, 0, n);
            return;
        }

        for(int i = n; i >= 0; i--){
            if(nums[i] > pv){
                swap(nums, p, i);
                break;
            }
        }
        reverse(nums, p + 1, n);
    }

    void reverse(vector<int>& nums, int s, int e){
        while(s < e){
            swap(nums, s, e);
            s++;
            e--;
        }
    }

    void swap(vector<int>& nums, int s, int e){
        int t = nums[s];
        nums[s] = nums[e];
        nums[e] = t;
    }
};

int main()
{
    vector<int> nums = {2,3,6,5,4,1};
    Solution *sol = new Solution;
    sol->nextPermutation(nums);
    for(auto k : nums)
        cout << k << endl;
    return 0;
}

/*
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), index = -1, last = 0, tmp = nums[n - 1];
        for (int i = n - 1; i > 0; i--) {
            if(nums[i] > nums[i - 1]) {
                index = i - 1;
                break;
            }
        }
        if(index != -1) {
            for(int i = n - 1; i >= 0; i--) {
                if (nums[i] > nums[index]) {
                    last = i;
                    break;
                }
            }
            swap(nums[index], nums[last]);
            sort(nums.begin() + 1 + index, nums.end());
        } else if(n > 1) {
            sort(nums.begin(), nums.end());
        }
    }
};
*/
