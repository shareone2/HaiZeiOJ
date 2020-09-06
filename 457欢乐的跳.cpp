/*************************************************************************
	> File Name: 457欢乐的跳.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 07 Aug 2020 11:38:50 PM CST
 ************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

bool flog[200000009];
int n, arr[1005], cnt;

int main() {
    cin >> n >> arr[1];
    for (int i = 2; i <= n; i++) {
        cin >> arr[i];
        int tmp = (int)fabs(arr[i] - arr[i - 1]);
        if (tmp <= n - 1 && !flog[tmp]) {
            cnt++;
            flog[tmp] = true;
        }
    }
    cout << (cnt == n - 1 ? "Jolly" : "Not jolly") << endl;
    return 0;
}
