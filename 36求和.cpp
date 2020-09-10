/*************************************************************************
	> File Name: 36求和.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Thu Sep 10 23:29:38 2020
 ************************************************************************/

#include <iostream>
using namespace std;

int n, sum;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int base;
        cin >> base;
        sum += base;
    }
    cout << sum << endl;
    return 0;
}
