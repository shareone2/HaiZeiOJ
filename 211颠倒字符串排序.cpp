/*************************************************************************
	> File Name: 211颠倒字符串排序.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sun 02 Aug 2020 07:24:48 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        reverse(arr[i].begin(), arr[i].end());
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
