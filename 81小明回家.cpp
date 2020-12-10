/*************************************************************************
*File Name: 81小明回家.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Thu Dec 10 19:32:28 2020
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

struct node {
    int x, y, step, c;
};

int n, m, check[2005][2005], check2[2005][2005];
char mmap[2005][2005];
int dir[5][2] = {
    {1, 0}, {-1, 0}, {0, -1}, {0, 1},
};

int main() {
    cin >> n >> m;
    queue<node> que;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == 'S') {
                que.push({i, j, 0, 0});
                check[i][j] = 1;
            }
        }
    }
    while (!que.empty()) {
        node temp = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (mmap[x][y] == 'T' && temp.c == 1) {
                cout << temp.step + 1 << endl;
                return 0;
            }
            if (mmap[x][y] == 'P' && !check2[x][y]) {
                check2[x][y] = 1;
                que.push({x, y, temp.step + 1, 1});
            } else if (mmap[x][y] == '.' || mmap[x][y] == 'S' || mmap[x][y] == 'P' || mmap[x][y] == 'T') {
                if (temp.c == 0 && !check[x][y]) {
                    que.push({x, y, temp.step + 1, 0});
                    check[x][y] = 1;
                } else if (temp.c == 1 && !check2[x][y]) {
                    que.push({x, y, temp.step + 1, 1});
                    check2[x][y] = 1;
                }
            }
        }
    }
    return 0;
}
