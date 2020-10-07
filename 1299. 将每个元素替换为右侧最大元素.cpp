//
// Created by Ruizhe Hou on 2020/10/7.
//
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int> &arr) {
        int m = -1, tmp;
        for (int i = arr.size() - 1; i >= 0; i--) {
            tmp = arr[i];
            arr[i] = m;
            m = tmp > m ? tmp : m;
        }
        return arr;
    }
};