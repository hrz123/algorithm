//
// Created by houruizhe on 2021/1/29.
//
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

class Solution {
private:
    static constexpr int dirs[4][2] = {{-1, 0},
                                       {0,  1},
                                       {1,  0},
                                       {0,  -1}};
public:
    int minimumEffortPath(vector<vector<int>> &heights) {
        int m = heights.size();
        int n = heights[0].size();
        int left = 0, right = 999999, ans = 0;
        while (left <= right) {
            int mid = left + ((right - left) >> 1);
            queue<pair<int, int>> q;
            q.emplace(0, 0);
            vector<int> seen(m * n);
            seen[0] = 1;
            while (!q.empty()) {
                auto[x, y] = q.front();
                q.pop();
                for (auto dir : dirs) {
                    int nx = x + dir[0];
                    int ny = y + dir[1];
                    if (nx >= 0 && nx < m && ny >= 0 && ny < n && !seen[nx * n + ny] &&
                        abs(heights[x][y] - heights[nx][ny]) <= mid) {
                        q.emplace(nx, ny);
                        seen[nx * n + ny] = 1;
                    }
                }
            }
            if (seen[m * n - 1]) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};

