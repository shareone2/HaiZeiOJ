/*************************************************************************
	> File Name: 78大整数加法.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 04 Sep 2020 11:54:00 PM CST
 ************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

char str1[1100], str2[1100];
int ans[1100];

void add(char *str) {
    int len = strlen(str);
    if (ans[0] < len) ans[0] = len;
    for (int i = 0; i < ans[0]; i++) {
        ans[len - i] += (str[i] - '0');
    }
    for (int i = 1; i <= ans[0]; i++) {
        if (ans[i] < 10) continue;
        ans[i + 1] += (ans[i] / 10);
        ans[i] %= 10;
        ans[0] += (i == ans[0]);
    }
    return ;
}

int main() {
    cin >> str1 >> str2;
    add(str1);
    add(str2);
    for (int i = ans[0]; i >= 1; i--) {
        cout << ans[i];
    }
    cout << endl;
    return 0;
}
