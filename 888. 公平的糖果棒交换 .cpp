//
// Created by houruizhe on 2021/2/1.
//

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int> &A, vector<int> &B) {
        int sa = 0, sb = 0, l, r;
        for (auto &a: A) { sa += a; }
        for (auto &b: B) { sb += b; }
        int diff = (sb - sa) / 2;
        sort(B.begin(), B.end());
        for (auto &a: A) {
            l = 0;
            r = B.size() - 1;
            int b = a + diff;
            while (l <= r && l >= 0 && r < B.size()) {
                int mid = (l + r) / 2;
                if (B[mid] == b)return vector<int>{a, b};
                else if (B[mid] > b) r = mid - 1;
                else l = mid + 1;
            }
        }
        return vector<int>{857, 886};
    }
};