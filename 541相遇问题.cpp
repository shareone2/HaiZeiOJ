/*************************************************************************
	> File Name: 541相遇问题.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Mon 17 Aug 2020 07:59:57 PM CST
 ************************************************************************/

#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int n, m;
int u[125], v[125], w1[125], w2[125], head[20], nexted[125];
deque <int> ans[2];

void add(int i) { //建图
    cin >> u[i] >> v[i] >> w1[i] >> w2[i];
    nexted[i] = head[u[i]];
    head[u[i]] = i;
    return ;
}

void dfs(int *people, deque <int> &ans, int loc, int cost) {//人走路的可能性都递归到
    if (loc == n) {
        ans.push_back(cost);
        return ;
    }
    for (int i = head[loc]; i; i = nexted[i]) {
        dfs(people, ans, v[i], cost + people[i]);
    }
    return ;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        add(i);
    }
    dfs(w1, ans[0], 1, 0); //搜索
    dfs(w2, ans[1], 1, 0);
    sort(ans[0].begin(), ans[0].end()); //升序排序
    sort(ans[1].begin(), ans[1].end());
    while (!ans[0].empty() && !ans[1].empty()) { //寻找答案
        if (ans[0][0] == ans[1][0]) {
            cout << ans[0][0] << endl;
            return 0;
        }
        if (ans[0][0] < ans[1][0]) ans[0].pop_front();
        else ans[1].pop_front();
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
