/*************************************************************************
	> File Name: 448抽奖.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 04 Aug 2020 11:05:22 AM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 5];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int num;
    cin >> num;
    for (int i = 1; i <= n; i++) {
        if (arr[i] == num) {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
