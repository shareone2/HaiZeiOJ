/*************************************************************************
	> File Name: 125考试结束时间.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Mon 10 Aug 2020 06:55:16 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int h, m, s, t;
string str;

int main() {
    cin >> h >> m >> s >> t;
    s += (t % 60); //时间转换
    m += (t / 60 + s / 60) % 60;
    h += (t / 60 / 60 + m / 60);
    s %= 60;
    m %= 60;
    h %= 24;
    str = (h >= 0 && h < 12 ? "am" : "pm");
    h = (h % 12 ? h % 12 : 12);
    cout << h << ':' << m << ':' << s << str << endl;
    cout << fixed << setprecision(2) << ((double)t / 86400.0 * 100.0) << '%' << endl;
    return 0;
}
