/*************************************************************************
	> File Name: 583字符串处理.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Tue Sep  8 18:28:45 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int handle(string &str, int len, int l, int r) {
    int cnt = 0;
    for (int i = 0; ; i++) {
        if (l - i < 0 || r + i >= len || str[l - i] != str[r + i]) break;
        cnt++;
    }
    return cnt;
}

int func(string &str) {
    int len = str.size(), ans = 0;
    for (int i = 0; i < len; i++) {
        ans += (handle(str, len, i, i) + handle(str, len, i, i + 1));
    }
    return ans;
}

int main() {
    string str;
    while (cin >> str) {
        cout << func(str) << endl;
    }
    return 0;
}
