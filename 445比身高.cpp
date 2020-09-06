/*************************************************************************
	> File Name: 445比身高.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 04 Aug 2020 02:20:05 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int n, cnt, arr[1005];
bool find(int);

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        if (find(i)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}

bool find(int x) {
    int l = 0, r = 0;
    for (int i = 1; i < x; i++) {
        arr[i] > arr[x] && ++l;
    }
    for (int i = x + 1; i <= n; i++) {
        arr[i] > arr[x] && ++r;
    }
    return l == r;
}
