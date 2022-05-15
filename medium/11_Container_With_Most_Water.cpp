#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int maxArea(vector<int>& height) {
		ios_base::sync_with_stdio(false);
		cin.tie(0);

		int l = height.size();
		int i = 0, j = l - 1, m = 0;

		while(i < j) {
			int h = min(height[i], height[j]);
			m = max(m, (j - i) * h);
			if(height[i] < height[j])
				i++;
			else
				j--;
		}

		return m;
    }
};

        int n=height.size();
        int ans=0;
        int i=0,j=n-1;
        while(i<j)
        {
            int l=min(height[i],height[j]);
            ans=max(ans,(j-i)*l);
            
            if(height[i]<height[j])
                i++;
            else
                j--;
        }

int main() {
	//vector<int> nums = {3, 2, 2, 3};
	//int val = 3;
	//vector<int> nums = {0, 1, 0, 3, 12};
	vector<int> nums = {1,8,6,2,5,4,8,3,7};
	//vector<int> nums = {7,1,5,3,6,4};
	//vector<int> nums = {7,6 ,5,3,1};
	/*
	int val = 2;
	vector<int> nums = {1};
	int val = 1;
	//vector<int> nums = {};
	//int val = 0;
	*/

	Solution *sol;
	int k = sol->maxArea(nums);
	cout << k << endl;
	return 0;
}
