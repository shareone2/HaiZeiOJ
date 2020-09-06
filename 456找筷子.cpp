/*************************************************************************
	> File Name: 456找筷子.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 08:21:08 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int n, ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int base;
        cin >> base;
        ans ^= base;
    }
    cout << ans << endl;
    return 0;
}
