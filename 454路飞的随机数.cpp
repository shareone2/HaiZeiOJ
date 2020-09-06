/*************************************************************************
	> File Name: 454路飞的随机数.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 08:15:46 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int n, cnt, arr[105], flog[1005];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int base;
        cin >> base;
        if (!flog[base]) {
            arr[cnt++] = base;
            flog[base] = 1;
        }
    }
    cout << cnt << endl;
    sort(arr, arr + cnt);
    for (int i = 0; i < cnt; i++) {
        if (i) {
            cout << ' ';
        }
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
