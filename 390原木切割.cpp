/*************************************************************************
	> File Name: 390原木切割.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Wed Sep 16 05:43:51 2020
 ************************************************************************/

#include <iostream>
#define max_n 100000
using namespace std;

int n, m, num[max_n + 5];

int judge(int mid) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        cnt += (num[i] / mid);
    }
    return cnt;
}

int func(int maxed) {
    int l = 1, r = maxed;
    while (l < r) {
        int mid = (l + r + 1) >> 1;
        if (judge(mid) < m) {
            r = mid - 1;
        } else {
            l = mid;
        }
    }
    return l;
}

int main() {
    cin >> n >> m;
    int maxed = 0;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
        (num[i] > maxed) && (maxed = num[i]);
    }
    cout << func(maxed) << endl;
    return 0;
}
