/*************************************************************************
	> File Name: 139输出A字菱形.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Mon 10 Aug 2020 10:04:15 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int n;
void ss(int i) { //打印空格
    for (int j = 1; j <= (2 * n - i) / 2; j++) {
        cout << ' ';
    }
}

void zz(int i) { //打印A
    for (int j = 1; j <= i; j++) {
        cout << 'A';
    }
}

int main() {
    cin >> n;
    for (int i = 2; i <= 2 * n; i += 2) { //上半段
        ss(i);
        zz(i);
        cout << endl;
    }
    for (int i = 2 * n - 2; i >= 2; i -= 2) { //下半段
        ss(i);
        zz(i);
        cout << endl;
    }
    return 0;
}
