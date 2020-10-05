/*************************************************************************
*File Name: 227六十四位整数乘法.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Wed Sep 30 11:38:42 2020
 ************************************************************************/

#include <iostream>
using namespace std;

long long quick_mul(long long a, long long b, long long p) {
    long long tmp = a, ans = 0;
    while (b) {
        if (b & 1) ans = (ans + tmp) % p;
        tmp = (2 * tmp) % p;
        b >>= 1;
    }
    return ans;
}

int main() {
    long long a, b, p; 
    cin >> a >> b >> p;
    cout << quick_mul(a, b, p) << endl;
    return 0;
}
