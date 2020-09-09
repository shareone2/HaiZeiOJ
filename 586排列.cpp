/*************************************************************************
	> File Name: 586排列.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Wed Sep  9 15:10:06 2020
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int flog[15];

bool handle(int x) {
    while (x) {
        if (!(x % 10) || flog[x % 10]) return 0;
        flog[x % 10] = 1;
        x /= 10;
    }
    return 1;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int base = __gcd(__gcd(a, b), c); //a, b, c三个数字最大公约数
    a /= base;
    b /= base;
    c /= base;
    for (int i = 123; i <= 987; i++) {
        if (i % a) continue; //第一个数字不能整除a则不满足条件
        int num2 = i / a * b;
        int num3 = i / a * c;
        if (floor(log10(i)) + floor(log10(num2)) + floor(log10(num3)) + 3 != 9) continue; //三个数的位数和不等于9则不满足条件
        if (num2 > 987 || num3 > 987) continue; //另两个数大于范围则不满足条件
        memset(flog, 0, sizeof(flog)); //每次清零标记数组
        if (!handle(i) || !handle(num2) || !handle(num3)) continue; //检验数字是否重复
        cout << i << ' ' << num2 << ' ' << num3 << endl; 
    }
    return 0;
}
