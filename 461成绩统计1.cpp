/*************************************************************************
	> File Name: 461成绩统计1.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 08 Aug 2020 12:14:50 AM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int n, cnt, sum;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        char c;
        cin >> c;
        if (c == 'C') {
            string score;
            cin >> score;
            cnt++;
        } else {
            int base;
            cin >> base;
            sum += base;
        }
    }
    cout << cnt << ' ' << sum / (n - cnt) << endl;
    return 0;
}
