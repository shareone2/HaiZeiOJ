/*************************************************************************
	> File Name: 442走楼梯.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sun 02 Aug 2020 06:56:13 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 5];
    arr[1] = 1;
    arr[2] = 2;
    for (int i = 3; i <= n; i++) {
        arr[i] = arr[i - 2] + arr[i - 1];
    }
    for (int i = 1; i <= n; i++) {
        i != 1 && cout << ' ';
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
