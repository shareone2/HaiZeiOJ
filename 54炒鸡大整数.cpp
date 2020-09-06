/*************************************************************************
	> File Name: 54炒鸡大整数.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 25 Aug 2020 04:52:48 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int x;
    while (~scanf("%d", &x)) {
        int num[10000] = {1, 1, 0};
        for (int i = 1; i <= x; i++) {
            for (int j = 1; j <= num[0]; j++) {
                num[j] *= i;
            }
            for (int j = 1; j <= num[0]; j++) {
                if (num[j] < 10) continue;
                num[j + 1] += (num[j] / 10);
                num[j] %= 10;
                num[0] += (j == num[0]);
            }
        }
        /*for (int i = 1; i <= num[0]; i++) {
            printf("%d", num[i]);
        }
        printf("\n");*/
        int ans[10000] = {1, 1, 0};
        for (int j = 1; j <= num[0]; j++) {
            if (!num[j]) continue;
            for (int i = 1; i <= ans[0]; i++) {
                ans[i] *= num[j];
            }
            for (int i = 1; i <= ans[0]; i++) {
                if (ans[i] < 10) continue;
                ans[i + 1] += (ans[i] / 10);
                ans[i] %= 10;
                ans[0] += (i == ans[0]);
            }
        }
        for (int j = ans[0]; j >= 1; j--) {
            printf("%d", ans[j]);
        }
        printf("\n");
    }
    return 0;
}
