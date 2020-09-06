/*************************************************************************
	> File Name: 130计算复利2.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 08 Aug 2020 02:52:04 PM CST
 ************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

double m, flog;
int n;

int main() {
    cin >> m >> n;
    flog = m;
    for (int i = 1; i <= n; i++) {
        m *= 1.00417;
        m += flog;
    }
    cout << '$' << fixed << setprecision(2) << m - flog << endl;
    return 0;
}
