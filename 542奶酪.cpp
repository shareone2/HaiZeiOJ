/*************************************************************************
	> File Name: 542奶酪.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 18 Aug 2020 06:53:15 AM CST
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int t, n, h, r, ball[1005][3], start[1005], start_cnt, check[1005], over[1005], arr[1005][1005];

bool dfs(int now) {
    if (over[now]) return true;
    for (int i = 1; i <= n; i++) {
        if (!check[i] && arr[now][i]) {
            check[i] = 1;
            if (dfs(i)) return true;
        }
    }
    return false;
}

int main() {
    cin >> t;
    while (t--) {
        memset(arr, 0, sizeof(arr));
        memset(over, 0, sizeof(over));
        memset(check, 0, sizeof(check));
        memset(start, 0, sizeof(start));
        start_cnt = 0;
        cin >> n >> h >> r;
        for (int i = 1; i <= n; i++) {
            cin >> ball[i][0] >> ball[i][1] >> ball[i][2];
            if (ball[i][2] <= r) { //底部入口
                start[start_cnt++] = i;
            }
            if (ball[i][2] + r >= h) { //顶部出口
                over[i] = 1;
            }
            for (int j = 1; j < i; j++) {
                double t1 = ball[i][0] - ball[j][0];
                double t2 = ball[i][1] - ball[j][1];
                double t3 = ball[i][2] - ball[j][2];
                if (sqrt(t1 * t1 + t2 * t2 + t3 * t3) <= 2 * r) { //能联通
                    arr[i][j] = arr[j][i] = 1;
                }
            }
        }
        bool f = false;
        for (int i = 0; i < start_cnt; i++) {
            if (check[start[i]]) continue;
            check[start[i]] = 1;
            if (!dfs(start[i])) continue;
            f = true;
            break;
        }
        cout << (f ? "Yes" : "No") << endl;
    }
    return 0;
}
