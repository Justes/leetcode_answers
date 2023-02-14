class Solution {
public:

    vector<int> kmp(string s) {
        int i = 1, j = 0, len = s.size();
        vector<int> vec(len, 0);

        while (i < len) {
            if (s[i] == s[j]) {
                vec[i++] = ++j;
            } else if (j) {
                j = vec[j - 1];
            } else {
                i++;
            }
        }

        return vec;
    }

    int strStr(string haystack, string needle) {
        int i = 0, j = 0, m = haystack.size(), n = needle.size();
        vector<int> vec = kmp(needle);

        while (i < m) {
            if (haystack[i] == needle[j]) {
                i++;
                j++;
            } else if (j) {
                j = vec[j - 1];
            } else {
                i++;
            }

            if (j == n) return i - j;
        }

        return -1;
    }
};
