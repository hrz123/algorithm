//
// Created by Ruizhe Hou on 2020/10/13.
//

#include <string>

using namespace std;


class Solution {
public:
    string generateTheString(int n) {
        string res;
        if (n % 2 == 1) {
            for (int i = 0; i < n; i++) {
                res.push_back('a');
            }
        } else {
            for (int i = 0; i < n - 1; i++) {
                res.push_back('a');
            }
            res.push_back('b');
        }
        return res;
    }
};