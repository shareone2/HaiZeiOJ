/*************************************************************************
	> File Name: 186弹簧板.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 11:16:11 AM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 1; i <= n; i += a[i]) {
        sum++;
    }
    cout << sum << endl;
    return 0;
}
