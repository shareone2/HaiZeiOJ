/*************************************************************************
	> File Name: 197排序的实现.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 28 Jul 2020 05:49:03 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int arr[15];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 10, cmp);
    for (int i = 0; i < 10; i++) {
        if (i) {
            cout << " ";
        }
        cout << arr[i];
    }
    cout << endl;
    return 0;
} 
