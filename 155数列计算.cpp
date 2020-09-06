/*************************************************************************
	> File Name: 155数列计算.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 28 Jul 2020 02:24:11 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;
int main() {
    int n, sum = 3, count = 0;
    cin >> n;
    for (int i = 2; i <= 2 * n; i += 2) {
        cout << sum << endl;
        count += sum;
        sum += i;
    }
    cout << count << endl;
    return 0;
}
