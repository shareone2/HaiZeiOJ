/*************************************************************************
	> File Name: 122时间转换.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 08 Aug 2020 02:05:57 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

int t, h, m, s;
string str = "am";

int main() {
    cin >> t;
    s = t % 60;
    m = t / 60; // m % 60为当前分钟
    h = m / 60;
    if (h >= 13) {
        h -= 12;
        str = "pm";
    } else if (h == 12) {
        str = "midnoon";
    }
    printf("%02d:%02d:%02d %s\n", h, m % 60, s, str.c_str());
    return 0;
}
