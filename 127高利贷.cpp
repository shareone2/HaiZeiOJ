/*************************************************************************
	> File Name: 127高利贷.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Mon 10 Aug 2020 06:36:21 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

double x;
int n;

int main() {
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        x = x * (1.06);
    }
    cout << (int)x << endl;
    return 0;
}
