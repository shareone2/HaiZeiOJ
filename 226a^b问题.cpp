/*************************************************************************
	> File Name: 226a^b问题.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Sat Sep 12 00:16:26 2020
 ************************************************************************/

#include <iostream>
using namespace std;

long long a, b, ans = 1, p;

int main() {
    cin >> a >> b >> p;
    long long base = a;
    for (int i = b; i; i >>= 1) {
        if (i & 1) ans = (ans * base) % p;
        base = (base * base) % p;
    }
    cout << ans % p << endl;
    return 0;
}
