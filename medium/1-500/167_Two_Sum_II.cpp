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
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while(i < j) {
            if(numbers[i] + numbers[j] == target) {
                return {i + 1, j + 1};
            } else if(numbers[i] + numbers[j] > target) {
                j--;
            } else {
                i++;
            }
        }
        return {};
    }
};

int main() {
    vector<int> numbers = {2,7,11,15};
    int target = 9;

    Solution* sol;
    vector<int> k = sol->twoSum(numbers, target);
    //cout << k << endl;

    for (auto x : k)
        cout << x << endl;

    return 0;
}

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> vec;
        unordered_map<int, int> mp;
        int num = 0;
        for(int i = 0; i < numbers.size(); i++) {
            if(mp.count(numbers[i])) {
                vec.push_back(mp[numbers[i]]);
                vec.push_back(i + 1);
            }
            num = target - numbers[i];
            mp[num] = i + 1;
        }

        return vec;
    }
};
*/
