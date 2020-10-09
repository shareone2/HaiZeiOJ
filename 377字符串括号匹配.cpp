/*************************************************************************
*File Name: 377字符串括号匹配.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Wed Sep 30 11:22:49 2020
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char c;
    int cnt = 0;
    while ((c = getchar()) != '\n') {
        switch (c) {
            case '(':
                cnt++;
                break;
            case ')':
                cnt--;
                if (cnt < 0) {
                    cout << "NO" << endl;
                    return 0;
                }
        }
    }
    cout << (cnt ? "NO" : "YES") << endl;
    return 0;
}
