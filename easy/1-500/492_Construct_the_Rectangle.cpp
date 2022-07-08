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
using namespace std;

class Solution {
public:
    vector<int> constructRectangle(int area) {
        int mid = sqrt(area);
        vector<int> vec;
        while(mid > 0) {
            if(area % mid == 0) {
                vec.push_back(area / mid);
                vec.push_back(mid);
                break;
            } else {
                mid--;
            }
        }
        return vec;
    }
};

int main()
{
    int num = 122122;
    Solution *sol;
    vector<int> k = sol->constructRectangle(num);
    for(auto x : k)
        cout << x << endl;
    return 0;
}
