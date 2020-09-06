/*************************************************************************
	> File Name: 206队列列求和.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sun 02 Aug 2020 08:21:33 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double arr[n + 3][m + 3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        double sum = 0.0;
        for (int j = 0; j < n; j++) {
            sum += arr[j][i];
        }
        printf("%g\n", sum);
    }
    return 0;
}
