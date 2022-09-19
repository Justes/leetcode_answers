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
#include <map>
#include <cstring>
#include <sstream>
using namespace std;

class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string, vector<string> >  mp;
        vector<vector<string> > res;

        for (const auto& path : paths) {
            stringstream ss(path);
            string directoryName;
            string s;
            getline(ss, directoryName, ' ');
            while (ss >> s) {
                string fileName = s.substr(0, s.find('('));
                string fullName = directoryName + '/' + fileName;
                string fileContent = s.substr(s.find('(') + 1, s.find(')') - s.find('(') - 1);
                mp[fileContent].push_back(fullName);
            }
        }

        for (const auto& m : mp)
            if (m.second.size() > 1)
                res.push_back(m.second);

        return res;
    }
};


int main()
{
    vector<string> path = {"root/a 1.txt(abcd) 2.txt(efgh)","root/c 3.txt(abcd)","root/c/d 4.txt(efgh)","root 4.txt(efgh)"};
    Solution *sol = new Solution;
    vector<vector<string>> y = sol->findDuplicate(path);
    for(auto x : y)
        for(auto k : x)
            cout << k << endl;
}
