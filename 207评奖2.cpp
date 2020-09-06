/*************************************************************************
	> File Name: 207评奖2.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 07 Aug 2020 08:12:06 PM CST
 ************************************************************************/

#include <iostream>
#include <climits>
#include <cstdarg>

using namespace std;

int n, maxed1 = INT_MIN, maxed2 = INT_MIN, mined = INT_MAX;  
string name;

void find(int n, ...) { //所有科目分数最高与最低 
    va_list arg;
    va_start(arg, n);
    int i = 1;
    while ((i++) <= 4) {
        int tmp = va_arg(arg, int);
        if (maxed2 <= tmp) maxed2 = tmp;
        if (mined >= tmp) mined = tmp;
    }
    va_end(arg);
    return ;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string tmp_name;
        cin >> tmp_name;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = a + b + c + d;
        if (sum > maxed1) { //单人分数和最大值
            name = tmp_name;
            maxed1 = sum;
        }
        find(4, a, b, c, d);
        cout << sum << endl;
    }
    cout << name << endl;
    cout << maxed2 << ' ' << mined << endl;
    return 0;
}
