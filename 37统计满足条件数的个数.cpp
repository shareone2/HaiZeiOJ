/*************************************************************************
	> File Name: 37统计满足条件数的个数.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Sat Sep 26 21:17:50 2020
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

bool is_val(int x) {
    return (x & 1) || (x % 5);
}

int main() {
    int m, n, ans = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        is_val(i) && ans++;
    }
    cout << ans << endl;
    return 0;
}
