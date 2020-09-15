/*************************************************************************
	> File Name: 394跳石头.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Wed Sep 16 03:05:35 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#define max_n 100000
using namespace std;

int a, b, num[max_n + 5];

void init() { 
    for (int i = 1; i <= a; i++) {
        cin >> num[i];
    }
    sort(num + 1, num + a + 1);
    return ;
}

int judge(int x) {
    int cnt = 1, now = 1;;
    for (int i = 1; i <= a; i++) {
        if (num[i] - num[now] >= x) {
            cnt++;
            now = i;
        }
    }
    return cnt;
}

int binary_search() {
    int l = 1, r = num[a] - num[1];
    while (l < r) {
        int mid = (l + r + 1) >> 1;
        int ans = judge(mid);
        if (ans < b) {
            r = mid - 1;
        } else {
            l = mid;
        }
    }
    return l;
}

int main() {
    cin >> a >> b;
    init();
    cout << binary_search() << endl;
    return 0;
}
