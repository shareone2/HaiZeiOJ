/*************************************************************************
	> File Name: 153某天是星期几.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Mon 10 Aug 2020 09:49:28 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int y, m, d, h;
int arr[8] = {6, 7, 1, 2, 3, 4, 5};

int main() {
    cin >> y >> m >> d;
    if (m == 1 || m == 2) m += 12, y--; //m的转换，y的转换
    int j = y / 100, k = y % 100; //世纪数和该世纪的年数
    h = (d + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7; //星期几
    cout << arr[h] << endl;
    return 0;
}
