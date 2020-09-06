/*************************************************************************
	> File Name: 77大数乘方.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Thu 27 Aug 2020 02:15:49 PM CST
 ************************************************************************/

#include <stdio.h>
#define max_n 1100

int m, n;
int ans[max_n + 5] = {1, 1, 0};

int main() {
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= ans[0]; j++) {
            ans[j] *= m;
        }
        for (int j = 1; j <= ans[0]; j++) {
            if (ans[j] < 10) continue;
            ans[j + 1] += (ans[j] / 10);
            ans[j] %= 10;
            ans[0] += (j == ans[0]);
        }
    }
    for (int i = ans[0]; i >= 1; i--) {
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}
