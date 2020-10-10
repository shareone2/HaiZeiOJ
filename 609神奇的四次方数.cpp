/*************************************************************************
*File Name: 609神奇的四次方数.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Fri Oct  2 22:52:43 2020
 ************************************************************************/

#include <iostream>
#include <cmath>
#define max_n 100000
using namespace std;

int main() {
    int m, num[max_n + 5] = {0};
    cin >> m;
    for (int i = 1; i <= m; i++) {
        num[i] = i;
        for (int j = 1; i - pow(j, 4) >= 0; j++) {
            num[i] = min(num[i], num[i - (int)pow(j, 4)] + 1);
        }
    }
    cout << num[m] << endl;
    return 0;
}
