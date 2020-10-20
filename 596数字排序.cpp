/*************************************************************************
*File Name: 596数字排序.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Tue Oct 20 21:37:48 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#define max_n 5000
using namespace std;

int n;
string str[max_n + 5];

bool cmp(string a, string b) {
    int len_a = a.length();
    int len_b = b.length();
    if (len_a == len_b) return a < b;
    return len_a < len_b;
}

// 初始化
void init() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    return ;
}

// 处理
void handle() {
    sort(str, str + n, cmp);
    return ;
}

// 输出
void out_put() {
    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }
    return ;
}

int main() {
    init();
    handle();
    out_put();
    return 0;
}
