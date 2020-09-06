/*************************************************************************
	> File Name: 540生日购物.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 18 Aug 2020 12:21:00 AM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int n, x, arr[45], set[2][3000005], cnt[2];

void dfs(int group, int l, int r, int sum) {
    if (sum > x) return ;
    for (int i = l; i < r; i++) {
        sum += arr[i];
        set[group][cnt[group]++] = sum;
        dfs(group, i + 1, r, sum);
        sum -= arr[i];
    }
}

int main() {
    while (cin >> n >> x) {
        cnt[0] = cnt[1] = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        dfs(0, 0, n / 2, 0);
        dfs(1, n / 2, n, 0);
        sort(set[1], set[1] + cnt[1]);
        bool flog = false;
        for (int i = 0; i < cnt[0]; i++) {
            int target = x - set[0][i];
            int l = 0, r = cnt[1] - 1;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (set[1][mid] == target) {
                    cout << "YES" << endl;
                    flog = true;
                    break;
                } else if (set[1][mid] < target) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            if (flog) break;
        }
        if (!flog) cout << "NO" << endl;
    }
    return 0;
}
