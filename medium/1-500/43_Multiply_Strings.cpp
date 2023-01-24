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
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        int n = num1.size(), m = num2.size();
        vector<int> res(n + m, 0);
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                res[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                res[i + j] += res[i + j + 1] / 10;
                res[i + j + 1] %= 10;
            }
        }

        int i = 0;
        string s;
        while(res[i] == 0) i++;
        while(i < res.size()) s += to_string(res[i++]);

        return s;
    }
};


int main()
{
    string n1 = "123", n2 = "456";
    Solution *sol = new Solution;
    string k = sol->multiply(n1, n2);
    cout << k << endl;
}

/*
class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        vector<int> res(num1.size() + num2.size(), 0);

        for (int i = num1.size() - 1; i >= 0; i--) {
            for (int j = num2.size() - 1; j >= 0; j--) {
                res[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                res[i + j] += res[i + j + 1] / 10;
                res[i + j + 1] %= 10;
            }
        }

        int i = 0;
        string ans = "";
        while (res[i] == 0) i++;
        while (i < res.size()) ans += to_string(res[i++]);

        return ans;
    }
};
*/
