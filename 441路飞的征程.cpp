/*************************************************************************
	> File Name: 441路飞的征程.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sun 02 Aug 2020 03:16:53 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int x, n, ans = 0;
    cin >> x >> n;
    if (n <= 8 - x) {
        if (n > 6 - x) n -= 2;
        cout << n * 2 << endl;
        return 0;
    }
    if (x <= 5) ans += (6 - x) * 2;
    n -= (8 - x);
    cout << ans + (n - (n / 7) * 2) * 2<< endl;
    return 0;
}
