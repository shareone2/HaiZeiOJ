/*************************************************************************
	> File Name: 398马的遍历.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Wed Sep 23 16:56:44 2020
 ************************************************************************/

#include <iostream>
#include <queue>
#include <cstdio>
#define max_n 405
using namespace std;

struct Node {
    int x, y, sum;
};

Node node[max_n + 5][max_n + 5];
int vis[max_n + 5][max_n + 5];
int n, m, x, y, dir[9][2] = {{-2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}};
queue <Node> que;

void init() { //初始化
    cin >> n >> m >> x >> y;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) { //记录每个点的坐标和步数
            node[i][j].x = i;
            node[i][j].y = j;
            node[i][j].sum = -1;
        }
    }
    node[x][y].sum = 0; //起点步数为0
    return ;
}

void bfs() { //宽搜
    que.push(node[x][y]); //起点压入队列并标记
    vis[x][y] = 1; 
    while (!que.empty()) {
        Node tmp = que.front();
        que.pop();
        for (int i = 0; i <= 7; i++) { //八个方向跑
            int base_x = tmp.x + dir[i][0]; //平移后的位置
            int base_y = tmp.y + dir[i][1];
            if (vis[base_x][base_y] || base_x < 1 || base_x > n || base_y < 1 || base_y > m) continue; //越界和走过
            node[base_x][base_y].sum += (tmp.sum + 2); //计算步数
            que.push(node[base_x][base_y]); //压入队列
            vis[base_x][base_y] = 1; //标记已经走过的点
        }
    }
    return ;
}

void out_put() { //输出每个点的步数
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            j != 1 && putchar(' ');
            cout << node[i][j].sum; //负数累加，求其相反数
        }
        putchar('\n');
    }
    return ;
}

int main() {
    init();
    bfs();
    out_put();
    return 0;
}
