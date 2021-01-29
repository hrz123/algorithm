//
// Created by houruizhe on 2020/10/19.
//
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {
        unordered_set<int> s;
        for (int num : nums) {
            if (s.count(num)) return true;
            s.insert(num);
        }
        return false;
    }
};