//
// Created by Ruizhe Hou on 2020/9/17.
//
#include <string>

using namespace std;

class Solution {
public:
    bool rotateString(string A, string B) {
        return A.size() == B.size() && (A + A).find(B) != -1;
    }
};