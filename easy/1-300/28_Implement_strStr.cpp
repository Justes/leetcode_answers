#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int hlen = haystack.length();
        int nlen = needle.length();
        int len = nlen;

        if (nlen == 0 || hlen == 0) {
            return 0;
        }

        int k, p, q = 0;

        for (int i=0; i < hlen; i++) {
            nlen = len;
            k = 0;
            p = i;
            q = i;

            while(nlen && (haystack[q] == needle[k])) {
                nlen--;
                q++;
                k++;
                if (nlen == 0) {
                    return p;
                }
            }
        }
        return -1;
    }
};

int main()
{
    string haystack = "hello";
    string needle = "ll";

    Solution * sol;
    int k = sol->strStr(haystack, needle);

    cout << k << endl;

    return 0;
}
