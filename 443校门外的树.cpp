/*************************************************************************
	> File Name: 443校门外的树.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 04 Aug 2020 05:22:34 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int L, M, arr[10005];

int main() {
    cin >> L >> M;
    for (int i = 1; i <= M; i++) {
        int l, r;
        cin >> l >> r;
        for (int i = l; i <= r; i++) arr[i] = 1;
    }
    int cnt = 0;
    for (int i = 0; i <= L; i++) !arr[i] && ++cnt;
    cout << cnt << endl;
    return 0;
}
