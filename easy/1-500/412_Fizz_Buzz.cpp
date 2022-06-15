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
    vector<string> fizzBuzz(int n) {
        vector<string> vec;
        int a = 0, b = 0;
        for(int i = 1; i <= n; i++) {
            a = i % 3;
            b = i % 5;
            if(a == 0 && b == 0) {
                vec.push_back("FizzBuzz");
            } else if(a && (b == 0)) {
                vec.push_back("Buzz");
            } else if((a == 0) && b) {
                vec.push_back("Fizz");
            } else {
                vec.push_back(to_string(i));
            }
        }

        return vec;
    }
};

int main() {
    int n = 3;

    Solution* sol;
    vector<string> k = sol->fizzBuzz(n);
    //cout << k << endl;

    for (auto x : k)
        cout << x << endl;


    return 0;
}
