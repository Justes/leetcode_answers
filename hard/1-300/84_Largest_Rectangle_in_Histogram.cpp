#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
		int maxArea = 0, index = 0;
		stack<int> st;
		heights.push_back(0);

		for(int i = 0; i < heights.size(); i++) {
			while(!st.empty() && heights[st.top()] > heights[i]) {
				index = st.top();
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
	vector<int> nums = {2,1,5,6,2,3};
	
	Solution *sol;
	int k = sol->largestRectangleArea(nums);
	cout << k << endl;
	return 0;
}
