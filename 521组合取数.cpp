/*************************************************************************
*File Name: 521组合取数.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Sun Oct 18 20:48:51 2020
 ************************************************************************/

#include <cmath>
#include <cstdio>
#define max_n 30
#define max_flog 4000000

int n, r, num[max_n + 3], ans = 0, flog[max_flog + 5], count = 0;

// 初始化
void init() {
    scanf("%d%d", &n, &r);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num[i]);
        count += num[i];
    }
    return ;
}

// 判断素数
bool is_prime(int x) {
    if (flog[x] == 1) return true;
    else if (flog[x] == -1) return false;
    int tmp = floor(sqrt(x) + 0.5);
    for (int i = 2; i <= tmp; i += (2 - !(i & 1))) {
        if (x % i) continue;
        flog[x] = -1;
        return false;
    }
    flog[x] = 1;
    return true;
}

// 深搜选择
void dfs(int x, int sum, int cnt) {
    if (cnt == r) {
        is_prime(sum) && ans++;
        return ;
    }
    for (int i = x; i <= n; i++) {
        dfs(i + 1, sum + num[i], cnt + 1);
    }
    return ;
}

// s深搜非选择
void n_dfs(int x, int sum, int cnt) {
    if (cnt == n - r) {
        is_prime(count - sum) && ans++;
        return ;
    }
    for (int i = x; i <= n; i++) {
        n_dfs(i + 1, sum + num[i], cnt + 1);
    }
    return ;
}

// 输出
void out_put() {
    printf("%d\n", ans);
    return ;
}

int main() {
    init();
    r <= n / 2 ? dfs(1, 0, 0) : n_dfs(1, 0, 0);
    out_put();
    return 0;
}
