//
// Created by Ruizhe Hou on 2020/10/12.
//
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        for (int i = 1; i < arr.size() - 1; i++)
            if (arr[i] - arr[i - 1] != arr[i + 1] - arr[i]) return false;
        return true;
    }
};
