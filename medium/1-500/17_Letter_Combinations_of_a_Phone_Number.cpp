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
using namespace std;

class Solution {
public:
    vector<string> str;
    unordered_map<char, string> mp = {{'2',"abc"}, {'3',"def"}, {'4',"ghi"}, {'5',"jkl"}, {'6',"mno"}, {'7',"pqrs"}, {'8',"tuv"}, {'9',"wxyz"} };

    void backtrack(int index , string &path, string &digits) {
        if(index == digits.size()) {
            str.push_back(path);
            return;
        }

        for(auto c : mp[digits[index]]) {
            path[index] = c;
            backtrack(index + 1, path, digits);
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return str;
        string path = digits;
        backtrack(0, path, digits);
        return str;
    }
};


int main()
{
    string num = "23";
    Solution *sol = new Solution;
    vector<string> x = sol->letterCombinations(num);
    for(auto k : x)
        cout << k << endl;
    return 0;
}

/*
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> str;
        if(digits.size() == 0) return str;
        str.push_back("");
        unordered_map<char, string> mp = {{'2',"abc"}, {'3',"def"}, {'4',"ghi"}, {'5',"jkl"}, {'6',"mno"}, {'7',"pqrs"}, {'8',"tuv"}, {'9',"wxyz"} };

        for(auto d : digits) {
            vector<string> tmp;
            for(auto c : mp[d]) {
                for(auto s : str) {
                    tmp.push_back(s + c);
                }
            }
            str.swap(tmp);
        }
        return str;
    }
};
*/
