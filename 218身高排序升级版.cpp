/*************************************************************************
	> File Name: 218身高排序升级版.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 07:46:14 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int n, height[100005], arr[100005];

bool cmp(int a, int b) {
    return height[a] < height[b];
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> height[i];
        arr[i] = i;
    }
    stable_sort(arr + 1, arr + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            cout << ' ';
        }
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
