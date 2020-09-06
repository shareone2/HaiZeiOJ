/*************************************************************************
	> File Name: 451商品排序.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 08:27:12 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int n, arr[100005];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
