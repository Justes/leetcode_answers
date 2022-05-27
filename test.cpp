#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <deque>
#include <stack>
using namespace std;

// 84
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        heights.push_back(0);
        int maxArea = 0;

        for(int i = 0; i < heights.size(); i++) {
            while(!st.empty() && heights[st.top()] > heights[i]) {
                int index = st.top();
                st.pop();
                int left = st.empty() ? -1 : st.top();
                maxArea = max(maxArea, heights[index] * (i - left - 1));
            }
            st.push(i);
        }

        return maxArea;
    }
};

int main() {
    vector<int> vec = {2,1,5,6,2,3};
    //vector<int> vec = {2,1,5,6,2,3};
    //vector<int> vec = {2,4};

    Solution* sol;
    int k = sol->largestRectangleArea(vec);
    cout << k << endl;

    return 0;
}
