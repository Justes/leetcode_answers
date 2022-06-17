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
    int countSegments(string s) {
        int k = 0, len = s.size();
        for(int i = 0; i < len; i++) {
            if(s[i] != ' ') {
                while(s[i] != ' ' && i < len)
                    i++;
                k++;
            }
        }
        return k;
    }
};

int main() {
    string s = "hello,   aaaa bb";

    Solution* sol;
    int k = sol->countSegments(s);
    cout << k << endl;

    return 0;
}
