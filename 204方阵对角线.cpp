/*************************************************************************
	> File Name: 204方阵对角线.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 07 Aug 2020 07:47:18 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int base;
            cin >> base;
            i == j && cout << base << endl;
        }
    }
    return 0;
}
