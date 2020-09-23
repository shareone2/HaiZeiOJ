/*************************************************************************
	> File Name: 396填涂颜色.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Wed Sep 23 16:08:46 2020
 ************************************************************************/

#include <iostream>
#include <cstdio>
#define max_n 35
using namespace std;

int n, num[max_n + 5][max_n + 5];

void init() { //初始化，输入
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> num[i][j];
        }
    }
    return ;
}

void dfs(int i, int j) {
    if (i < 0 || i > n + 1 || j < 0 || j > n + 1 || num[i][j]) return ; //越界和得1不处理
    num[i][j] = 2; //将外界标记为2
    dfs(i - 1, j); //四个方向递归
    dfs(i + 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);
    return ;
}

void out_put() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            j != 1 && putchar(' ');
            cout << (num[i][j] == 2 ? 0 : (num[i][j] ? num[i][j] : 2)); //将标记为2的输出0，将是0的输出2即可
        }
        putchar('\n');
    }
    return ;
}

int main() {
    init();
    dfs(0, 0);
    out_put();
    return 0;
}
