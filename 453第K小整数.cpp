/*************************************************************************
> File Name: 453第K小整数.cpp
> Author: LiShiJie
> Mail: 2659002865@qq.com
> Created Time: Sun 02 Aug 2020 04:44:29 PM CST
************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int j = 1, cnt = 1, base = arr[0]; j < n; j++) {
        base != arr[j] && (base = arr[j]) && cnt++;
        if (cnt == k) {
            cout << base << endl;
            return 0;
        }
    }
    cout << "NO RESULT" << endl;
    return 0;
}
