/*************************************************************************
	> File Name: 190路飞的猜想.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 07 Aug 2020 08:52:18 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

bool is_prime[10000001] = {1, 1};
int prime[10000001], cnt = 0;
void getprime(int n) {
    for (int i = 2; i <= n; i++) {
        if (!is_prime[i]) { prime[cnt++] = i; }
        for (int j = 0; j < cnt && i * prime[j] <= n; j++) {
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) { break; } //全篇的精华，保证合数只被最小质约数访问到。
        }
    }
}

int main() {
    int n;
    cin >> n;
    getprime(n);
    int ans = 0;
    for (int i = 0; i < cnt && prime[i] <= n / 2; i++) {
        !is_prime[n - prime[i]] && ans++;
    }
    cout << ans << endl;
    return 0;
}
