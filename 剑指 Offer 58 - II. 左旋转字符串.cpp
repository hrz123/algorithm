//
// Created by Ruizhe Hou on 2020/10/9.
//
#include <string>

using namespace std;

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string res = s.substr(n);
        res += s.substr(0, n);
        return res;
    }
};