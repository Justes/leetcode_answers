#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = nums1.size(), tmp = 0;

        for (int i = m; i < len; i++) {
            nums1[i] = nums2[i - m];
        }

        for (int i = 0; i < len - 1; i++) {
            for(int j = 0; j < len - i - 1; j++) {
                if(nums1[j] > nums1[j+1]) {
                    tmp = nums1[j];
                    nums1[j] = nums1[j + 1];
                    nums1[j + 1] = tmp;
                }
            }
        }
    }
};

int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;

    Solution* sol;
    sol->merge(nums1, m, nums2, n);

    for(auto x:nums1)
        cout << x <<endl;

    return 0;
}
