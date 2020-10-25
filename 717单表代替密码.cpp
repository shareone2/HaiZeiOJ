/*************************************************************************
*File Name: 717单表代替密码.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Sun Oct 18 20:11:33 2020
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cstdio>
#define max_n 1000
using namespace std;

string a = "abcdefghijklmnopqrstuvwxyz";
char base[max_n + 5];
string b;


// 初始化
void init() {
    scanf("%[^\n]s", base);
    cin >> b;
    return ;
}

// 处理
void handle() {
    int len = strlen(base);
    for (int i = 0; i < len; i++) {
        if (base[i] == ' ') continue;
        int tmp = b.find(base[i]); // 字符对应位置
        base[i] = a[tmp]; // 替换
    }
    return ;
}

// 输出
void out_put() {
    cout << base << endl;
    return ;
}

int main() {
    init();
    handle();
    out_put();
    return 0;
}
