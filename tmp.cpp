//
// Created by houruizhe on 2020/10/31.
//

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

typedef long long LL;

class Solution {
public:
    /**
     * @param N:  a positive integer N
     * @return: return a maximum integer less than N, each digit of which must be monotonically increasing.
     */
    long long getIncreasingNumber(long long N) {
        // write your code here
        if (N >= 123456789) return 123456789L;
        LL res = 0;
        int pre = 10, digit = 1;
        while (N != 0) {
            LL mod = N % 10;
            LL small = mod < pre - 1 ? mod : pre - 1;
            res += digit * small;
            digit *= 10;
            pre = small;
            N /= 10;
        }
        return res;
    }
};


int main() {
    auto *sol = new Solution();
    auto res = sol->getIncreasingNumber(998);
    cout << res << endl;
    return 0;
}