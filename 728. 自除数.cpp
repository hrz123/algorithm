//
// Created by Ruizhe Hou on 2020/10/10.
//
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int i = left; i <= right; i++) {
            bool is_self_divided = true;
            int tmp = i, digit;
            while (tmp) {
                digit = tmp % 10;
                if (!digit || i % digit) {
                    is_self_divided = false;
                    break;
                }
                tmp /= 10;
            }
            if (is_self_divided) res.push_back(i);
        }
        return res;
    }
};