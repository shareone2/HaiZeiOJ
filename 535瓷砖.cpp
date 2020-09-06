/*************************************************************************
	> File Name: 535瓷砖.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 14 Aug 2020 10:19:56 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int h, w;
char arr[53][53];
int judge(int x, int y) {
    if (arr[x][y] != '.') return 0;
    arr[x][y] = '#';
    return 
        judge(x - 1, y) + judge(x + 1, y) +
        judge(x, y - 1) + judge(x, y + 1) + 1;
}

int main() {
    cin >> h >> w;
    int x, y;
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= h; j++) {
            cin >> arr[i][j];
            if (arr[i][j] != '@') continue;
			x = i;
			y = j;
			arr[i][j] = '.';
        }
    }
    cout << judge(x, y) << endl;
    return 0;
}
