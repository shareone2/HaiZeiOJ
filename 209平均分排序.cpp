/*************************************************************************
	> File Name: 209平均分排序.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sun 02 Aug 2020 08:15:29 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    int n;
    cin >> n;
    double arr[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        printf("%g\n", arr[i]);
    }
    return 0;
}
