//
// Created by Ruizhe Hou on 2020/10/7.
//
#include <string>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string S) {
        string res;
        int cnt = 0;
        for (char c : S) {
            if (c == '(') {
                if (cnt++) res.push_back(c);

            } else {
                if (--cnt) res.push_back(c);
            }
        }
        return res;
    }
};
