//
// Created by Ruizhe Hou on 2020/10/9.
//
#include <cmath>

using namespace std;

class Solution {
public:
    int maximum69Number(int num) {
        int res = num, i = -1, j = 0;
        while (num) {
            if (num % 10 == 6) {
                i = j;
            }
            num /= 10;
            j++;
        }
        if (i == -1) return res;
        return res + (int) (3 * pow(10, i));
    }
};