/*************************************************************************
	> File Name: 140输出字母菱形.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Mon 10 Aug 2020 10:57:06 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

void ss(int i, int n) { //打印空格
    for (int j = ((2 * n - 1) - i) / 2; j >= 1; j--) {
        cout << ' ';
    }
    return ;
}

void zz(char a, int n) { //打印字母
    for (int i = 1; i <= n; i++) {
        cout << a;
    }
}

int main() {
    int n, cnt = 65;
    cin >> n;
    for (int i = 1; i <= (2 * n - 1); i += 2) { //上半个
        ss(i, n);
        zz(cnt, i);
        cout << endl;
        cnt++;
    }
    cnt -= 2;
    for (int i = (2 * n - 3); i >= 1; i -= 2) { //下半个
        ss(i, n);
        zz(cnt, i);
        cout << endl;
        cnt--;
    }
    return 0;
}
