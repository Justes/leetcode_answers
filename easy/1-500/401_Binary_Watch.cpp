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
using namespace std;

class Solution {
public:
    vector<string> readBinaryWatch(int turnOn) {
        vector<string> result;
        for(int h = 0; h < 12; h++) {
            for(int m = 0; m < 60; m++) {
                if(__builtin_popcount(h) + __builtin_popcount(m) == turnOn) {
                    string tmp = to_string(h) + ":";
                    if(m < 10) tmp += "0";
                    tmp += to_string(m);
                    result.push_back(tmp);
                }
            }
        }
        return result;
    }
};

int main()
{
    int num = 8;
    Solution *sol;
    vector<string> k = sol->readBinaryWatch(num);
    for(auto x : k)
        cout << x << endl;

    return 0;
}
