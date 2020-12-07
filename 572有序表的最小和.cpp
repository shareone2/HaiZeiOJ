/*************************************************************************
*File Name: 572有序表的最小和.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Fri Nov 13 15:21:59 2020
 ************************************************************************/

#include <cstdio>
#include <queue>
#include <utility>
#define max_n 400000
using namespace std;

priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > que;

int n, arr1[max_n + 5], arr2[max_n + 5], flog[max_n + 5];

// 初始化
void init() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    return ;
}

// 处理
void handle() {
    for (int i = 0; i < n; i++) {
        que.push(make_pair(arr1[i] + arr2[0], i));
    }
    for (int i = 1; i <= n; i++) {
        int val = que.top().first;
        int loc = que.top().second;
        que.pop();
        printf("%d\n", val);
        que.push(make_pair(arr1[loc] + arr2[++flog[loc]], loc));
    }
    return ;
}

int main() {
    init();
    handle();
    return 0;
}

