/*************************************************************************
	> File Name: 584最长不下降子序列1.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Wed Sep  9 17:06:48 2020
 ************************************************************************/

#include <iostream>
#define max_n 100005
using namespace std;

int num[max_n + 5], n, ans[max_n + 5], now;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    ans[now++] = num[0];
    for (int i = 1; i < n; i++) {
        if (num[i] >= ans[now - 1]) {
            ans[now++] = num[i];
        } else {
            int l = 0, r = now - 1;
            while (l < r) {
                int mid = (l + r) >> 1;
                if (ans[mid] <= num[i]) { //寻找第一个大于num[i]的ans
                    l = mid + 1;
                } else {
                    r = mid;
                }
            }
            ans[l] = num[i];
        }
    }
    cout << now << endl;
    return 0;
}
