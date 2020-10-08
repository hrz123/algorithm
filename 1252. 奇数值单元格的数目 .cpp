//
// Created by Ruizhe Hou on 2020/10/8.
//
#include <vector>

using namespace std;

class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>> &indices) {
        int rows[n];
        int cols[m];
        memset(rows, 0, sizeof(rows));
        memset(cols, 0, sizeof(cols));
        for (auto indice : indices) {
            rows[indice[0]]++;
            cols[indice[1]]++;
        }
        int odd_rows = 0, odd_cols = 0;
        for (int row : rows) {
            if (row & 1) odd_rows++;
        }
        for (int col : cols) {
            if (col & 1) odd_cols++;
        }
        return odd_rows * (m - odd_cols) + (n - odd_rows) * odd_cols;
    }
};
