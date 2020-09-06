/*************************************************************************
	> File Name: 375奖学金.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 11 Aug 2020 12:07:07 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

#define max_n 300

using namespace std;

int n;
int arr[max_n + 5], sum[max_n + 5], ch[max_n + 5], ma[max_n + 5], en[max_n + 5];

bool cmp(int a, int b) {
    if (sum[a] == sum[b]) {
        if (ch[a] == ch[b]) {
            return a < b;
        }
        return ch[a] > ch[b];
    }
    return sum[a] > sum[b];
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        arr[i] = i;
        cin >> ch[i] >> ma[i] >> en[i];
        sum[i] = ch[i] + ma[i] + en[i];
    }
    sort(arr + 1, arr + n + 1, cmp);
    for (int i = 1; i <= 5; i++) {
        cout << arr[i] << ' ' << sum[arr[i]] << endl;
    }
    return 0;
}
