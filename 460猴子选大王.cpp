/*************************************************************************
	> File Name: 460猴子选大王.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 08 Aug 2020 12:08:09 AM CST
 ************************************************************************/

#include <iostream>
#include <queue>

using namespace std;

int n, k;
queue <int> que;

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        que.push(i);
    }
    while (que.size() != 1) {
        for (int i = 1; i < k; i++) {
            que.push(que.front());
            que.pop();
        }
        que.pop();
    }
    cout << que.front() << endl;
    return 0;
}
