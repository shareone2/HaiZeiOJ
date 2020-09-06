/*************************************************************************
	> File Name: 214前K名的平均数.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 02:00:31 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n;
    cin >> n;
    int arr[n + 3];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    sort(arr + 1, arr + n + 1, cmp);
    double ans = 0;
    for (int i = 1; i <= k; i++) {
        ans += arr[i];
    }
    cout << fixed << setprecision(2) << ans / k << endl;
    return 0;
}
