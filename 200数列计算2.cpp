/*************************************************************************
	> File Name: 200数列计算2.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 11:24:07 AM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    double a = 11.0, b = 18.0, sum = 4.0 / 7.0 + 7.0 / 11.0;
    for (int i = 3; ; i++) {
        sum += a / b;
        if (i == n) {
            break;
        }
        b = a + b;
        a = b - a;
    }
    cout << (int)a << '/' << (int)b << endl << fixed << setprecision(2) << sum << endl;
    return 0;
}
