/*************************************************************************
	> File Name: 219交叉排序.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 07:54:36 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int n, l1, r1, l2, r2, arr[10005];

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    cin >> n >> l1 >> r1 >> l2 >> r2;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    sort(arr + l1, arr + r1 + 1);
    sort(arr + l2, arr + r2 + 1, cmp);
    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            cout << ' ';
        }
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
