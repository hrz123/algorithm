//
// Created by Ruizhe Hou on 2020/10/2.
//
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> s;
        for (char c : J) {
            s.insert(c);
        }
        int res = 0;
        for (char c: S) {
            if (s.count(c)) res++;
        }
        return res;
    }
};