//
// Created by Ruizhe Hou on 2020/10/10.
//
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        if (n & 1) {
            res.push_back(0);
        }
        int start = 1;
        for (; n > 1; n -= 2, start++) {
            res.push_back(start);
            res.push_back(-start);
        }
        return res;
    }
};