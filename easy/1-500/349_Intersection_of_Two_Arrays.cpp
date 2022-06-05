#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<unordered_set>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		vector<int> vec;
		int len1 = nums1.size(), len2 = nums2.size();
		if(len1 > len2) {
			swap(nums1, nums2);
		}

		for(int i = 0; i < nums1.size(); i++) {
			if(find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end() && find(vec.begin(), vec.end(), nums1[i]) == vec.end()) {
				vec.push_back(nums1[i]);
			}
		}

		return vec;
    }
};

int main() {
	vector<int> vec1 = {1, 2, 2, 1};
	vector<int> vec2 = {2, 2};
	
	Solution *sol;
	vector<int> k = sol->intersection(vec1, vec2);
	for (auto x : k)
		cout << x << endl;

	return 0;
}
