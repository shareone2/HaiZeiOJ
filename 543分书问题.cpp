/*************************************************************************
	> File Name: 543分书问题.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Mon 17 Aug 2020 07:14:39 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int n, ans;
char a[23][23];
bool flog_book[23];

void dfs(int x_people) {
    if (x_people == n + 1) {
        ans++;
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if (!flog_book[i] && a[x_people][i] == '1') {
            flog_book[i] = true;
            dfs(x_people + 1);
            flog_book[i] = false;
        }
    }
    return ;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    dfs(1);
    cout << ans << endl;
    return 0;
}
