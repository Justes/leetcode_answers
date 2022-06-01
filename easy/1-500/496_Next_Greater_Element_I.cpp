#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <deque>
#include <stack>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num;
        stack<int> st;
        unordered_map<int, int> mp;

        for (int n : nums2) {
            while(st.size() && st.top() < n) {
                mp[st.top()] = n;
                st.pop();
            }
            st.push(n);
        }

        for(int n : nums1) {
            num.push_back(mp.count(n) ? mp[n] : -1);
        }

        return num;
    }
};

int main() {
    vector<int> vec1 = {4, 1, 2};
    vector<int> vec2 = {1, 3, 4, 2};

    Solution* sol;
    vector<int> vec = sol->nextGreaterElement(vec1, vec2);
    for (auto x: vec)
        cout << x << endl;

    return 0;
}

/*
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num;
        for(int i = 0; i < nums1.size(); i++) {
            int tmp = -1, next = -1;
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) tmp = j;

                if(tmp != -1 && nums2[j] > nums2[tmp]) {
                    next = nums2[j];
                    break;
                }
            }
            num.push_back(next);
        }

        return num;
    }
};
*/
