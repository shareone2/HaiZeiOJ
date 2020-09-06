/*************************************************************************
	> File Name: 53最大因子和.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 29 Aug 2020 11:48:34 AM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
#define max_n 1000000

using namespace std;

int ans[max_n + 5];

void init() {
    for (int i = 2; i <= max_n; i++) {
        for (int j = i; j <= max_n; j += i) {
            ans[j] += i;
        }
    }
    return ;
}

int main() {
    init();
    int maxed = 0;
    for (int i = 2; i <= max_n; i++) {
        maxed = max(maxed, ans[i]);
    }
    cout << maxed + 1 << endl;
    return 0;
}
