/*************************************************************************
	> File Name: 450站队.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 08:24:02 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int n, arr[105];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        if (i) {
            cout << ' ';
        }
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
