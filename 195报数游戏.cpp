/*************************************************************************
	> File Name: 195报数游戏.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 07 Aug 2020 09:36:25 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int n, m, arr[100005];

int find(int x) {
    int l = 1, r = n;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] <= x && arr[mid + 1] > x) {
            return arr[mid];
        } else if (arr[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return x >= arr[n] ? arr[n] : arr[1];
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= m; i++) {
        int tmp;
        cin >> tmp;
        i != 1 && cout << ' ';
        cout << find(tmp);
    }
    cout << endl;
    return 0;
}
