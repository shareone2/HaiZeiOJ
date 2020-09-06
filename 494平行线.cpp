/*************************************************************************
	> File Name: 494平行线.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 05 Sep 2020 09:08:05 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int main() {
    long long n, ans;
    cin >> n;
    if (!(n % 2)) {
        ans = n / 2 * ((n - 2) / 2) * ((n - 2) / 2);
    } else {
        ans = n * (n - 1) * (n - 3) / 8;
    }
    cout << ans << endl;
    return 0;
}
