/*************************************************************************
	> File Name: 447幸运数的划分.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 04 Aug 2020 11:09:20 AM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int arr[20] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

int main() {
    int n;
    cin >> n;
    for (int i = 0; arr[i] <= n && i < 14; i++) {
        if (!(n % arr[i])) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
