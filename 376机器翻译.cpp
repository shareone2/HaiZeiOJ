/*************************************************************************
	> File Name: 376机器翻译.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 05 Sep 2020 02:26:38 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>

using namespace std;

int m, n, flog[1007], ans;
queue<int> que;

int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (flog[x]) continue;
        que.push(x);
        flog[x] = 1;
        ans++;
        if (que.size() != m) continue;
        flog[que.front()] = 0;
        que.pop();
    }
    cout << ans << endl;
    return 0;
}
