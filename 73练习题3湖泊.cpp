/*************************************************************************
*File Name: 73练习题3湖泊.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Wed Sep 30 11:01:17 2020
 ************************************************************************/

#include <iostream>
#define max_n 1000
using namespace std;

int n, m, node[max_n + 5][max_n + 5];

//输入
void init() {
    cin >> n >> m;
    getchar();
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            node[i][j] = getchar();
        }
        getchar();
    }
    return ;
}

//深搜
void dfs(int x, int y) {
    if (x < 0 || x > n + 1 || y < 0 || y > m + 1 || node[x][y] == 'X') return ;
    node[x][y] = 'X';
    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
    return ;
}

//输出
void output() {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            node[i][j] == 'O' && ++sum;
        }
    }
    cout << sum << endl;
    return ;
}
int main() {
    init();
    dfs(0, 0);
    output();
    return 0;
}
