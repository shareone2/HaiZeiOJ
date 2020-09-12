/*************************************************************************
	> File Name: 57有趣的序列.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Sat Sep 12 18:42:27 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cmath>
#define max_n 1000018
using namespace std;

char a[max_n];
int now = 1, ans = 1, x, y, z, flog;

void handle(int i) {
    int base = pow(10, floor(log10(i)));
    for (; base && now <= flog; now++) {
        a[now] = ((i / base) % 10) + '0';
        (now == x || now == y || now == z) && (ans *= (a[now] - '0'));
        base /= 10;
    }
    return ;
}

int main() {
    cin >> x >> y >> z;
    flog = max(x, max(y, z));
    for (int i = 1; now <= flog; i++) {
        handle(i);
    }
    cout << ans << endl;
    return 0;
}
