/*************************************************************************
*File Name: 79输出素数.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Sat Oct 10 12:03:23 2020
 ************************************************************************/

#include <iostream>
#include <cstdio>
#define max_n 10000000
using namespace std;

int is_prime[max_n + 5], prime[max_n + 5], cnt, flog = max_n + 7;

void init(int a, int b) {
    for (int i = 2; i <= b; i++) {
        if (!is_prime[i]) {
            if (flog == max_n + 7 && i >= a) flog = cnt;
            prime[cnt++] = i;
        }
        for (int j = 0; j < cnt && i * prime[j] <= b; j++) {
            is_prime[i * prime[j]] = 1;
            if (!(i % prime[j])) break;
        }
    }
    return ;
}

void out_put() {
    for (int i = flog; i < cnt; i++) {
        printf("%d\n", prime[i]);
    }
    return ;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    init(a, b);
    out_put();
    return 0;
}
