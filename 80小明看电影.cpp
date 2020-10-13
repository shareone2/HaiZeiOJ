/*************************************************************************
*File Name: 80小明看电影.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Sat Oct 10 13:54:52 2020
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <queue>
#define max_n 500
using namespace std;

struct Node {
    int x, y, step;
    Node() {}
    Node(int a, int b, int c) {
        x = a;
        y = b,
        step = c;
    }
};

int n, m, dir[5][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
char loc[max_n + 5][max_n + 5];
queue<Node> que;

// 输入
void init() {
    scanf("%d%d", &n, &m);
    getchar(); // 去掉'\n'
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            loc[i][j] = getchar();
            if (loc[i][j] == 's') { // 学校单独处理
                que.push(Node(i, j, 0));
                loc[i][j] = '#';
            }
        }
        getchar(); // 去掉'\n'
    }
    return ;
}

// 处理
Node bfs() {
    while (!que.empty()) {
        Node tmp = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = tmp.x + dir[i][0];
            int y = tmp.y + dir[i][1];
            if (loc[x][y] == 'g') return Node(x, y, tmp.step + 1); // 找到电影院
            if (loc[x][y] != '.') continue; // 不符合条件     
            loc[x][y] = '#'; // 防止往回走
            que.push(Node(x, y, tmp.step + 1));
        }
    }
    return Node(-1, -1, -1); //无法到达
}

int main() {
    init();
    int ans = bfs().step; //步数
    if (ans == -1) printf("No");
    else printf("%d", ans);
    putchar('\n');
    return 0;
}
