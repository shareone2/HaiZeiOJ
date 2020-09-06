/*************************************************************************
	> File Name: 210词典排序.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sun 02 Aug 2020 07:13:38 PM CST
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
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        i && cout << ' ';
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
