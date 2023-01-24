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

/*
class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0, j = 0; i < haystack.length();) {
            if(haystack[i] == needle[j]) i++, j++;
            else i = i - j + 1,j = 0;
            if(j == needle.length()) return i - j;
        }
        return -1;
    }
};

class Solution {
public:

    vector<vector<int>> kmp(string p) {
        int x = 0, m = p.size();
        vector<vector<int>> dfa(m, vector<int>(256, 0));
        dfa[0][int(p[0])] = 1;
        for(int j = 1; j < m; j++) {
            for(int c = 0; c < 256; c++) {
                dfa[j][c] = dfa[x][c];
            }
            dfa[j][int(p[j])] = j + 1;
            x = dfa[x][int(p[j])];
        }
        return dfa;
    }

    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        int i = 0, j = 0;
        vector<vector<int>> dfa = kmp(needle);
        for(; i < n && j < m; i++) {
            j = dfa[j][int(haystack[i])];
        }

        if(j == m) {
            return i - m;
        }
        return -1;
    }

};

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0, j = 0, m = haystack.size(), n = needle.size();
        vector<int> v = kmp(needle);
        while(i < m) {
            if(haystack[i] == needle[j]) {
                i++;
                j++;
            } else if(j) {
                j = v[j - 1];
            } else {
                i++;
            }

            if(j == n) return i - j;
        }
        return -1;
    }

    vector<int> kmp(string s) {
        int i = 1, j = 0, n = s.size();
        vector<int> vec(n, 0);

        while(i < n) {
            if(s[i] == s[j]) {
                vec[i++] = ++j;
            } else if(j) {
                j = vec[j - 1];
            } else {
                vec[i++] = 0;
            }
        }
        return vec;
    }
};
*/
