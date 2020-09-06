/*************************************************************************
	> File Name: 213分数段统计.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 01:49:34 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n;
    cin >> n;
    int a[n + 3], b[7] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        switch (a[i] / 10) {
            case 10: 
                b[1]++;
                break;
            case 9:
                b[2]++;
                break;
            case 8:
                b[3]++;
                break;
            case 7:
                b[4]++;
                break;
            case 6:
                b[5]++;
                break;
            default :
                b[6]++;
        }
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        cout << a[i] << endl;
    }
    for (int i = 1; i <= 6; i++) {
        if (i != 1) {
            cout << ' ';
        }
        cout << b[i];
    }
    cout << endl;
    return 0;
}
