//
// Created by Ruizhe Hou on 2020/9/18.
//
#include <cstdio>
#include <algorithm>

using namespace std;

const int maxn = 100 + 5;

struct Building {
    int id;
    double x, y, w, d, h;

    bool operator>(const Building &rhs) const {
        return x < rhs.x || (x == rhs.x && y < rhs.y);
    }
} b[maxn];

int n;
double x[maxn * 2];

bool cover(int i, double mx) {
    return b[i].x <= mx && b[i].x + b[i].w >= mx;
}

int a[2][3] = {1, 2, 3, 4, 5, 6};

// 判断建筑物i在x=mx处是否可见
bool visible(int i, double mx) {
    if (!cover(i, mx)) return false;
    for (int k = 0; k < n; k++)
        if (b[k].y < b[i].y && b[k].h >= b[i].h && cover(k, mx)) return false;
    return true;
}

int main() {
    int kase = 0;
    while (scanf("%d", &n) == 1 && n) {
        for (int i = 0; i < n; i++) {
            scanf("%lf%lf%lf%lf%lf", &b[i].x, &b[i].y, &b[i].w, &b[i].d, &b[i].h);
            x[i * 2] = b[i].x;
            x[i * 2 + 1] = b[i].x + b[i].w;
            b[i].id = i + 1;
        }
        sort(b, b + n);
        sort(x, x + n * 2);
        int m = unique(x, x + n * 2) - x; // x坐标排序后去重，得到m个坐标
        if (kase++) printf("\n");
        printf("For map #%d, the visible buildings are numbered as follows:\n%d", kase);
        for (int j = 0; j < m - 1; j++) {
            bool vis = false;
            if (visible(i, (x[j] + x[j + 1]) / 2)) {
                vis = true;
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
