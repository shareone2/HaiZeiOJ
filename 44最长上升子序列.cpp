/*************************************************************************
	> File Name: 44最长上升子序列.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Fri Sep 11 23:37:44 2020
 ************************************************************************/

#include <iostream>
using namespace std;

int n, num[1000007], now = 1;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int base;
        cin >> base;
        if (base > num[now - 1]) {
            num[now++] = base;
        } else {
            int l = 1, r = now - 1;
            while (l < r) {
                int mid = (l + r) >> 1;
                if (num[mid] < base) {
                    l = mid + 1;
                } else {
                    r = mid;
                }
            }
            num[l] = base; 
        }
    }
    cout << now - 1 << endl;
    return 0;
}
