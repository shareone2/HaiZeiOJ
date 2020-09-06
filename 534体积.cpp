/*************************************************************************
	> File Name: 534体积.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Mon 17 Aug 2020 06:31:39 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int n, num[25], flog[1005] = {1}, ans;

void dfs(int x, int sum) {
    if (!flog[sum]) {
        ans++;
        flog[sum] = 1;
    }
    for (int i = x; i < n; i++) {
        dfs(i + 1, sum + num[i]);
    }
    return ;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    dfs(0, 0);
    cout << ans << endl;
    return 0;
}
