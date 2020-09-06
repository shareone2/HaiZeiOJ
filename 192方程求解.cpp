/*************************************************************************
	> File Name: 192方程求解.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 07 Aug 2020 06:15:29 PM CST
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x) {
    return x * exp(x);
}

int main() {
    double a;
    cin >> a;
    double l = 0, r = 20;
    while (r - l > 1e-9) {
        double mid = (l + r) / 2;
        (f(mid) < a ? l : r) = mid;
    }
    cout << fixed << setprecision(4) << l << endl;
    return 0;
}
