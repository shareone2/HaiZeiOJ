/*************************************************************************
	> File Name: 397僵尸来袭.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Mon 17 Aug 2020 07:49:15 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int n, m, arr[105][105], ans;

void dfs(int i, int j) {
    if (!arr[i][j]) return ;
    arr[i][j] = 0;
    dfs(i + 1, j);
    dfs(i - 1, j);
    dfs(i, j + 1);
    dfs(i, j - 1);
    return ;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (!arr[i][j]) continue;
            ans++;
            dfs(i, j);
        }
    }
    cout << ans << endl;
    return 0;
}
