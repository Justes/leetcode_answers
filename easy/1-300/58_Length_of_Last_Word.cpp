#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        int f, b, k = 0;

        if(len == 0) {
            return 0;
        }


        while(s[len - 1] == ' ') {
            len--;
        }


        for (int i = len - 1; i >= 0; i--) {
            if(s[i] != ' ') {
                k++;
            } else {
                break;
            }
        }

        return k;
    }
};

int main()
{
    string s = "   fly me   to   the moon  ";

    Solution * sol;
    int k = sol->lengthOfLastWord(s);

    cout << k << endl;

    return 0;
}
