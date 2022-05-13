#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int alen = a.length();
        int blen = b.length();
        int n = 0;

        if(alen < blen) return addBinary(b, a);

        for(int i = alen - 1, j = blen - 1; i >= 0; i--, j--) {
            if (n == 0 && j < 0) break;
            if (a[i] == '1') n++;
            if (j >= 0 && b[j] == '1') n++;

            a[i] = (n % 2 == 0 ? '0': '1');
            n /= 2;
        }

        if(n) a = "1" + a;

        return a;
    }
};

int main() {
    string a = "1011";
    string b = "1011";


    Solution *sol;
    string k = sol->addBinary(a, b);

    cout << k << endl;

    return 0;
}
