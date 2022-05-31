#include<iostream>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> m;

        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        char n, b;
        n = b = 'a';
        int len, value, tmp = 0;

        len = s.length();
        for(int i=1; i<len; i++) {
            b = s[tmp];
            n = s[i];
            if(m.count(b)) {
                if(m[b] < m[n]) {
                    value -= m[b];
                } else {
                    value += m[b];
                }
            }

            tmp++;
        }
        value += m[s[len - 1]];
        return value;
    }
};

int main(){
    string s;
    int value;

    cin >> s;

    Solution sol;
    value = sol.romanToInt(s);

    cout << value << endl;

    return 0;
}
