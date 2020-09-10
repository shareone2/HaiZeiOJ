/*************************************************************************
	> File Name: 35数数字.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Thu Sep 10 23:33:50 2020
 ************************************************************************/

#include <iostream>
using namespace std;

int l, r, flog;

int main() {
    cin >> l >> r;
    for (int i = (l < 0 ? 0 : l); i <= r; i++) {
        flog = 1;
        cout << i << endl;
    }
    if (!flog) cout << "ERROR" << endl;
    return 0;
}
