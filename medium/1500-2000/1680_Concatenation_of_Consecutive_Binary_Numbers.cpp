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
    const int mod = 1000000007;

    int concatenatedBinary(int n) {
        string s = decimalToBinary(n);
        return binaryToDecimal(s);
    }

	string decimalToBinary(int n) {
        string str = "";
        for(int i = n; i >= 1; i--){
            int no = i;
            while(no) {
                str += (no % 2) + '0';
                no /= 2;
            }
        }
        return str;
    }

    int binaryToDecimal(string n){
        long long ans = 0, powe = 1;
        for(int j = 0; j < n.size(); j++){
            long long now = (n[j] - '0') * (powe);
            powe *= 2;
            powe %= mod;
            ans += now;
        }
        return ans % mod;
    }
};


int main()
{
    int n = 12;
    Solution *sol = new Solution;
    int k = sol->concatenatedBinary(n);
    cout << k << endl;
}
