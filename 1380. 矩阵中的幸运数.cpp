//
// Created by Ruizhe Hou on 2020/10/13.
//
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int rowMin, index;
        vector<int> res;
        for (int i = 0; i < m; i++) {
            rowMin = 100000;
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] < rowMin) {
                    rowMin = matrix[i][j];
                    index = j;
                }
            }
            bool flag = true;
            for (int k = 0; k < m; k++) {
                if (matrix[k][index] > rowMin) {
                    flag = false;
                    break;
                }
            }
            if (flag) res.push_back(matrix[i][index]);
        }
        return res;
    }
};