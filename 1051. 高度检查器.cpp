//
// Created by Ruizhe Hou on 2020/10/12.
//
#include <vector>

using namespace std;

class Solution {
public:
    int heightChecker(vector<int> &heights) {
        int size = heights.size();
        vector<int> vec(heights);
        sort(vec.begin(), vec.end());
        int i = 0;
        int j = 0;
        int count = 0;
        for (i = 0, j = 0; j < size; i++, j++) {
            if (heights[i] != vec[j]) {
                ++count;
            }
        }
        return count;
    }
};
