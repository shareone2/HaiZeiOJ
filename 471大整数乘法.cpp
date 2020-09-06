/*************************************************************************
	> File Name: 471大整数乘法.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Thu 27 Aug 2020 11:34:19 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define max_n 100

char str_a[max_n + 5], str_b[max_n + 5];
int a[max_n + 5], b[max_n + 5], c[2 * max_n + 5]; //100位数字相乘不会超200位

void carry(int *num, int *len) {
    while (num[*len] == 0) (*len)--; //缺陷可能是最后一位数出现不是个位数的情况
    return ;
}

void solve(const char *str1, const char *str2) {
    memset(c, 0, sizeof(c));
    int len_a = strlen(str_a), len_b = strlen(str_b);
    for (int i = 0; str1[i]; i++) a[len_a - i - 1] = str1[i] - '0';
    for (int i = 0; str2[i]; i++) b[len_b - i - 1] = str2[i] - '0';
    for (int i = 0; i < len_a; i++) {
        int x = 0; //定义一个中间变量存取进位的数值
        for (int j = 0; j < len_b; j++) {
            c[i + j] += (a[i] * b[j] + x); //乘积的时候加上要进位的数字
            x = c[i + j] / 10; //提取本次进位的数字
            c[i + j] %= 10; //保留个位数
        }
        c[i + len_b] = x; //给每次乘积结束后的最后一位赋值
    }
    int len_c = len_a + len_b;
    carry(c, &len_c);
    for (int i = len_c; i >= 0; i--) {
        printf("%d", c[i]);
    }
    printf("\n");
    return ;
}

int main() {
    while (~scanf("%s%s", str_a, str_b)) {
        solve(str_a, str_b);
    }
    return 0;
}
