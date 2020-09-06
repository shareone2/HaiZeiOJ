/*************************************************************************
	> File Name: 194两数之和.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 07 Aug 2020 09:25:46 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int n, arr[100005], s;

bool find() {
    int l = 1, r = n;
    while (l <= r) {
        if (arr[l] + arr[r] < s) {
            l++;
        } else if (arr[l] + arr[r] > s) {
            r--;
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
    cin >> s;
    cout << (find() ? "Yes" : "No") << endl;
    return 0;
}
