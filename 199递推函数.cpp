/*************************************************************************
	> File Name: 199递推函数.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 28 Jul 2020 06:03:16 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int a[11], k, m;
long long ans[100010] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

long long f(int x) {
    if (ans[x] || !x) {
        return ans[x];
    }
    for (int i = 1; i <= 10; i++) {
        a[i] && (ans[x] += f(x - i));
        ans[x] %= m;
    }
    return ans[x];
}

int main() {
    cin >> k >> m;
    for (int i = 1; i <= 10; i++) {
        cin >> a[i];
    }
    cout << f(k)<< endl;
    return 0;
}
