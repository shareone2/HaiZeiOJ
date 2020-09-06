/*************************************************************************
	> File Name: 287合并果子.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 11 Aug 2020 02:52:54 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>

using namespace std;

int n, arr, ans;
priority_queue <int, vector <int>, greater <int> > que;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr;
        que.push(arr);
    }
    while (que.size() != 1) {
        int base = 0;
        base += que.top();
        que.pop();
        base += que.top();
        que.pop();
        ans += base;
        que.push(base);
    }
    cout << ans << endl;
    return 0;
}
