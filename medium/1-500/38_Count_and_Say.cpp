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
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        string str = "1";

        for (int i = 0; i < n - 1; i++) {
            string s;
            for (int j = 0; j < str.size(); j++) {
                int cnt = 1;
                while(j + 1 < str.size() && str[j] == str[j + 1]) {
                    j++;
                    cnt++;
                }
                s.push_back(cnt + '0');
                s.push_back(str[j]);
            }
            str = s;
        }

        return str;
    }
};

int main()
{
    int nums = 4;
    Solution *sol = new Solution;
    string k = sol->countAndSay(nums);
    cout << k << endl;
}
