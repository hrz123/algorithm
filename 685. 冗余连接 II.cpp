//
// Created by Ruizhe Hou on 2020/9/17.
//
#include <vector>

using namespace std;

class Solution {
    int n;
    vector<int> fa;

    int find(int x) {
        return fa[x] == x ? x : fa[x] = find(fa[x]);
    }

    bool helper(vector<vector<int>> &edges, int except) {
        for (int i = 1; i <= n; i++) fa[i] = i;
        int cnt = n;
        for (int i = 0; i < n; i++) {
            if (i == except) continue;
            int fx = find(edges[i][0]), fy = find(edges[i][1]);
            if (fx != fy) {
                cnt--;
                fa[fy] = fx;
            }
        }
        return cnt == 1;
    }

public:
    vector<int> findRedundantDirectedConnection(vector<vector<int>> &edges) {
        n = edges.size();
        fa.resize(n + 1);
        vector<int> degree(n + 1);
        for (auto &v: edges) {
            degree[v[1]]++;
        }
        for (int i = n - 1; i >= 0; i--) {
            if (degree[edges[i][1]] == 2) {
                if (helper(edges, i)) return edges[i];
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (degree[edges[i][1]] == 1) {
                if (helper(edges, i)) return edges[i];
            }
        }
        return {};
    }
};
