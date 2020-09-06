/*************************************************************************
	> File Name: 43数字三角形.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 29 Aug 2020 11:03:04 AM CST
 ************************************************************************/
#include <stdio.h>
#include <algorithm>
#define max_n 1000

int f[max_n + 5][max_n + 5];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            scanf("%d", &f[i][j]);
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            f[i][j] += std :: max(f[i + 1][j], f[i + 1][j + 1]); //观察结果得到
        }
    }
    printf("%d\n", f[0][0]);
    return 0;
}


