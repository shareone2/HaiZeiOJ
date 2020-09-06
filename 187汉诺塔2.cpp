/*************************************************************************
> File Name: 187汉诺塔2.cpp
> Author: LiShiJie
> Mail: 2659002865@qq.com
> Created Time: Fri 07 Aug 2020 09:51:59 PM CST
************************************************************************/

#include <iostream>

using namespace std;

int n;
long long cnt[65], power[65];

int main() {
    cin >> n;
    cnt[1] = power[1] = 1;
    for (int i = 2; i <= n; i++) {
        cnt[i] = cnt[i - 1] * 2 + 1;
        power[i] = power[i - 1] * 2 + i;
    }
    cout << cnt[n] << ' ' << power[n] << endl;
    return 0;
}
