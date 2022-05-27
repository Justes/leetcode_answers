#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int k = 0;
        while (num) {
            if(num % 2) num--; else num /= 2;
            k++;
        }
        return k;
    }
};

int main() {
    int n;
    cin >> n;

    Solution* sol;
    int k = sol->numberOfSteps(n);

    cout << k << endl;

    return 0;
}
