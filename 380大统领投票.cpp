/*************************************************************************
	> File Name: 380大统领投票.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 11 Aug 2020 11:36:31 AM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int n, arr[101];
string s[101];

bool cmp(int a, int b) {
    int len_a = s[a].length();
    int len_b = s[b].length();
    if (len_a == len_b) {
        return s[a] > s[b];
    }
    return len_a > len_b;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        arr[i] = i;
    }
    sort(arr + 1, arr + n + 1, cmp);
    cout << arr[1] << endl;
    cout << s[arr[1]] << endl;
    return 0;
}
