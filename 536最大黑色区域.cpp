/*************************************************************************
	> File Name: 536最大黑色区域.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 14 Aug 2020 11:07:06 PM CST
 ************************************************************************/

#include <iostream>
#include <climits>

using namespace std;

char arr[105][105];

int find(int x, int y) {
    if (!arr[x][y]) return 0;
    arr[x][y] = 0;
    return 
        find(x - 1, y) + find(x + 1, y) +
        find(x, y - 1) + find(x, y + 1) + 1;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
            arr[i][j] -= '0';
        }
    }
    int maxed = INT_MIN;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int base = find(i, j);
            if (base > maxed) maxed = base;
        }
    }
    cout << maxed << endl;
    return 0;
}
