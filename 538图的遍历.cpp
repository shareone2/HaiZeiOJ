/*************************************************************************
	> File Name: 538图的遍历.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Mon 17 Aug 2020 06:52:01 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int n, arr[23][23];
bool flog1[23], flog2;

void dfs(int x) {
    if (!flog1[x]) {
        if (flog2) putchar('-');
        printf("%d", x);
        flog2 = 1;
        flog1[x] = 1;
        for (int i = 1; i <= n; i++) {
            if (!arr[x][i]) continue;
            dfs(i);
        }
    }
    return ;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 1; i <= n; i++) { //非联通图
        dfs(i);
    }
    return 0;
}
