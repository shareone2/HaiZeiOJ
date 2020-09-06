/*************************************************************************
	> File Name: 221抢气球.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 01 Aug 2020 06:05:27 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int n, m, people[100005], people_data[100005], height[100005], ans[100005];

bool cmp(int a, int b) {
    return people_data[a] < people_data[b];
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> people_data[i];
        people[i] = i;
    }
    for (int i = 0; i < m; i++) {
        cin >> height[i];
    }
    sort(people, people + n, cmp);
    sort(height, height + m);
    int cnt = 0;
    for (int i = 0; i < m && cnt < n; i++) {
        if (height[i] <= people_data[people[cnt]]) {
            ans[people[cnt]]++;
        } else {
            cnt++;
            i--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
