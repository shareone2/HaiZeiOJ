/*************************************************************************
	> File Name: 33身高.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Thu Sep 10 23:12:24 2020
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double m, n, p, ans = 0;
    cin >> m >> n >> p;
    if (p) {
        ans = (m + n) * 1.087 / 2;
    } else {
        ans = (m * 0.973 + n) / 2;
    }
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}
