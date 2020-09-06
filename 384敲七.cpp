/*************************************************************************
	> File Name: 384敲七.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 05 Sep 2020 04:29:31 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>

using namespace std;

int n, x, t;
queue <int> que;

void init() {
    for (int i = 1; i <= n; i++) {
        que.push(i);
    }
    for (int i = 1; i < x; i++) {
        que.push(que.front());
        que.pop();
    }
    return ;
}

bool judge(int x) {
    if (!(x % 7)) return 1;
    for (int i = x; i; i /= 10) {
        if (i % 10 == 7) return 1;
    }
    return 0;
}

void execute() {
    for (int i = t; que.size() != 1; i++) {
        if (judge(i)) {
            //cout << i << ' ' << que.front() << endl;
            que.pop();
            continue;
        }
        que.push(que.front());
        que.pop();
    }
    return ;
}

int main() {
    cin >> n >> x >> t;
    init();
    execute();
    cout << que.front() << endl;
    return 0;
}
