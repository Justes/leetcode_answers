#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        vector<int> vec;

        for(int i = 0; i < nums.size(); i++) {
            if(!q.empty() && (i - k >= q.front())) q.pop_front();
            while(!q.empty() && nums[q.back()] < nums[i]) q.pop_back();
            q.push_back(i);
            if(i >= k - 1) vec.push_back(nums[q.front()]);
        }
        return vec;
    }
};

int main() {
    vector<int> vec = {1,3,-1,0,-2,5,6,7};
    int val = 3;

    Solution* sol;
    vector<int> k = sol->maxSlidingWindow(vec, val);

    for(auto x:k)
        cout << x << endl;

    return 0;
}
