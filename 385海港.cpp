/*************************************************************************
*File Name: 385海港.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Fri Nov 13 19:52:30 2020
 ************************************************************************/

#include <cstdio>
#include <queue>
#define max_n 50
#define maxed 100000
using namespace std;

struct Node {
    int t, k;
    int arr[max_n + 5];
};

queue<Node> que;
int n, flog[maxed + 10], ans, t;


int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        // 输入
        Node tmp;
        scanf("%d%d", &tmp.t, &tmp.k);
        for (int i = 0; i < tmp.k; i++) {
            scanf("%d", &tmp.arr[i]);
            if (!flog[tmp.arr[i]]) ans++;
            flog[tmp.arr[i]]++;
        }
        // 判断
        while (!que.empty() && tmp.t - que.front().t >= 86400) {
            Node base = que.front();
            que.pop();
            for (int i = 0; i < base.k; i++) {
                flog[base.arr[i]]--;
                if (!flog[base.arr[i]]) ans--;
            }
        }
        // 输出
        printf("%d\n", ans);
        que.push(tmp);
    }
    return 0;
}
