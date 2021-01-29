//
// Created by houruizhe on 2020/10/19.
//
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        vector<char> s, t;
        for (auto &c : S) {
            if (c == '#') {
                if (!s.empty()) s.pop_back();
            } else s.push_back(c);
        }
        for (auto &c : T) {
            if (c == '#') {
                if (!t.empty()) t.pop_back();
            } else t.push_back(c);
        }
        // cout << s.size() << " " << t.size() << endl;
        if (s.size() != t.size()) return false;

        for (int i = 0; i < s.size(); i++)
            if (s[i] != t[i]) return false;
        return true;
    }
};