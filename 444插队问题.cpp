/*************************************************************************
	> File Name: 444插队问题.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 04 Aug 2020 11:18:57 AM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 5];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    for (int i = n; i >= x; i--) {
        arr[i + 1] = arr[i];
    }
    arr[x] = arr[n + 1];
    for (int i = 1; i <= n; i++) {
        i != 1 && cout << ' ';
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
