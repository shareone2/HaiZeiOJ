/*************************************************************************
	> File Name: 193是否可以求和.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 07 Aug 2020 09:15:05 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int n, k, s, arr[100005];

bool equ() {
    int l = 1, r = n;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] + k < s) {
            l = mid + 1;
        } else if (arr[mid] + k > s) {
            r = mid - 1;
        } else {
            return true;
        }
    }
    return false;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    cin >> k >> s;
    cout << (equ() ? "Yes" : "No") << endl;
    return 0;
}
