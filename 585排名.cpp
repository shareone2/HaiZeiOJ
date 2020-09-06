/*************************************************************************
	> File Name: 585排名.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 11 Aug 2020 04:49:20 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

#define max_n 200

using namespace std;

struct Stu {
    int s, g;
} arr[max_n + 5];

int cmp(Stu a, Stu b) {
    if (a.s == b.s) {
        return a.g < b.g; 
    }
    return a.s > b.s;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].s >> arr[i].g;
    }
    sort(arr, arr + n, cmp);
    cout << 0 << endl;
    for (int i = 1; i < n; i++) {
        int cnt = 0;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j].g < arr[i].g) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
