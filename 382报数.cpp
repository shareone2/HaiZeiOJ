/*************************************************************************
	> File Name: 382报数.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 05 Sep 2020 10:35:37 AM CST
 ************************************************************************/

#include <iostream>
#include <queue>

using namespace std;

queue <int> que;
int n, m;

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        que.push(i);
    }
    int cnt = 0;
    while (que.size() != 1) {
        cnt++;
        int x = que.front();
        que.pop();
        if (cnt == m) {
            cnt = 0;
            continue;
        }
        que.push(x);
    }
    cout << que.front() << endl;
    return 0;
}
