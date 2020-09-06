/*************************************************************************
	> File Name: 439游泳.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 07:08:23 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int main() {
    double x, strong = 2.0;
    cin >> x;
    int cnt = 0;
    for (int i = 1; (cnt = i); i++) {
        x -= strong;
        if (x <= 0) {
            break;
        }
        strong *= 0.98;
    }
    cout << cnt << endl;
    return 0;
}
