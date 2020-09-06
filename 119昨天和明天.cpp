/*************************************************************************
	> File Name: 119昨天和明天.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 01 Aug 2020 07:03:09 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

int month[13] = {
    0, 31, 28, 31, 30, 31, 30, 31, 
    31, 30, 31, 30, 31
};

int is_check(int y) {
    return !(y % 4) && (y % 100) || !(y % 400);
}

void prev(int y, int m, int d) {
    d--;
    if (!d) m--;
    if (!m) m = 12, y--;
    if (!d) d = month[m];
    printf("%d %d %d\n", y, m, d);
    return ;
}

void next(int y, int m, int d) {
    d++;
    if (d - 1 == month[m]) m++, d = 1;
    if (m > 12) m = 1, y++;
    printf("%d %d %d\n", y, m, d);
    return ;
}

int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    if (is_check(y)) month[2] += 1;
    prev(y, m, d);
    next(y, m, d);
    return 0;
}
