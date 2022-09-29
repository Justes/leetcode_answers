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
#include <cstring>
#include <sstream>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0, right = arr.size() - 1;
        while (right - left + 1 > k) {
            if (arr[right] - x < x - arr[left]) left++;
            else right--;
        }

        return vector<int>(arr.begin() + left, arr.begin() + right + 1);
    }
};

int main()
{
    vector<int> n = {1, 2, 3, 4, 5};
    int k = 4, x = 3;
    Solution *sol = new Solution;
    vector<int> y = sol->findClosestElements(n, k, x);
    for (auto k : y)
        cout << k << endl;
}

/*
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0, right = arr.size() - k;
        while (left < right) {
            int mid = (left + right) / 2;
            if (x - arr[mid] > arr[mid + k] - x)
                left = mid + 1;
            else
                right = mid;
        }
        return vector<int>(arr.begin() + left, arr.begin() + left + k);
    }
};
*/
