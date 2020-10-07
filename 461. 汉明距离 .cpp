//
// Created by Ruizhe Hou on 2020/10/7.
//
#include <bitset>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        return bitset<32>(x ^ y).count();
    }
};
