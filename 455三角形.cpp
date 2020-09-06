/*************************************************************************
	> File Name: 455三角形.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 08:06:07 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int a[4];

int main() {
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    int num = __gcd(a[0], a[2]);
    cout << a[0] / num << '/' << a[2] / num << endl;
    return 0;
}
