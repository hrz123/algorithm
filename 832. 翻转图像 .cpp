//
// Created by Ruizhe Hou on 2020/10/8.
//
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A) {
        int n = A.size();
        for (int i = 0; i < n; i++) {
            for (int l = 0, r = n - 1; l < r; l++, r--) {
                swap(A[i][l], A[i][r]);
                A[i][l] = 1 - A[i][l];
                A[i][r] = 1 - A[i][r];
            }
            if (n & 1) A[i][n >> 1] = 1 - A[i][n >> 1];
        }
        return A;
    }
};

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A) {
        for (auto &vec:A) {
            reverse(vec.begin(), vec.end());
            for (auto &elm:vec) {
                if (elm == 0) {
                    elm = 1;
                } else {
                    elm = 0;
                }
            }
        }
        return A;
    }
};
