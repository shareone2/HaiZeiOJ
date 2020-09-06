/*************************************************************************
	> File Name: 462注册账号.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 08 Aug 2020 12:20:30 AM CST
 ************************************************************************/

#include <iostream>

using namespace std;

long long n, male = 0, female = 0, sum = 0;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        char c;
        cin >> c;
        if (c == 'i') {
            string id;
            cin >> id;
            ((int)id[id.length() - 2] & 1 ? male : female) += 1;
        } else {
            long long tmp;
            cin >> tmp;
            sum += tmp;
        }
    }
    long long base = n - male - female;
    cout << male << ' ' << female << ' ' << (base ? sum / base : 0) << endl;
    return 0;
}
