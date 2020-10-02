/*************************************************************************
*File Name: 71练习题1朋友圈.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Wed Sep 30 10:00:41 2020
 ************************************************************************/

#include <iostream>
#define max_n 10000
using namespace std;

int n, m, peo[max_n + 5];

//并查集查找
int find(int x) { return peo[x] == x ? x : (peo[x] = find(peo[x])); }

//初始化
void init() {
    cin >> n >> m; //输入
    for (int i = 1; i <= n; i++) peo[i] = i; //赋初值
    return ;
}

//处理函数
void handle() {
    for (int i = 1; i <= m; i++) {
        char a;
        int x, y;
        cin >> a >> x >> y;
        switch (a) {
            case '1':
                peo[find(x)] = find(peo[y]);
                break;
            case '2':
                cout << (find(peo[x]) == find(peo[y]) ? "Yes" : "No") << endl;           
        }
    }
    return ;
}

int main() {
    init();
    handle();
    return 0;
}
