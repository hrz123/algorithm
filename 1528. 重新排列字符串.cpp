//
// Created by Ruizhe Hou on 2020/10/2.
//
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int> &indices) {
        int n = s.length();
        string res(n, 0);
        for (int i = 0; i < n; i++) {
            res[indices[i]] = s[i];
        }
        return res;
    }
};