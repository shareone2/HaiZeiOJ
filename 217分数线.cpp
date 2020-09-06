/*************************************************************************
	> File Name: 217分数线.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 01 Aug 2020 11:25:31 AM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int n, score[103];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        score[temp]++;
    }
    int ans = 0;
    for (int i = 100; i >= 0; i--) {
        ans += score[i];
        if (ans * 2 >= n) {
            cout << i << ' ' << ans << endl;
            break;
        }
    }
    return 0;
}
