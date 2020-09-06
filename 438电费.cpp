/*************************************************************************
	> File Name: 438电费.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 02:12:06 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    double ans;
    if (n >= 401) {
        ans += (n - 400) * 0.7783;
    }
    if (n >= 241) {
        ans += (n > 400 ? 160 : (n - 240)) * 0.5283;
    }
    ans += (n > 240 ? 240 : n) * 0.4783;
    cout << fixed << setprecision(1) << ans << endl;
    return 0;
}
