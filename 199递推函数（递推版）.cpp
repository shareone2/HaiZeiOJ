/*************************************************************************
	> File Name: 199递推函数（递推版）.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 08 Aug 2020 03:31:55 PM CST
 ************************************************************************/

#include <stdio.h>

int k, m, a[12], num[100005] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int sum(int x) {
    return 
    a[1] * num[x - 1] + a[2] * num[x - 2] + a[3] * num[x - 3] +
    a[4] * num[x - 4] + a[5] * num[x - 5] + a[6] * num[x - 6] +
    a[7] * num[x - 7] + a[8] * num[x - 8] + a[9] * num[x - 9] +
    a[10] * num[x - 10];
}

int main() {
    scanf("%d%d", &k, &m);
    for (int i = 1; i <= 10; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 10; i <= k; i++) {
        num[i] = sum(i) % m;
    }
    printf("%d\n", num[k]);
    return 0;
}
