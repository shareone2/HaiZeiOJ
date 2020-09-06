/*************************************************************************
	> File Name: 203身高排队.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 07 Aug 2020 06:57:50 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int m, n, people[12][12];
vector <int> ve;
bool cmp(int a, int b) {
    return a > b;
}

int main() {
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> people[i][j];
            ve.push_back(people[i][j]);
        }
    }
    for (int i = 1; i <= n; i++) { //找列最大
        int base = people[1][i];
        for (int j = 2; j <= m; j++) {
            if (base >= people[j][i]) continue;
            base = people[j][i];
        }
        cout << base << endl;
    } 
    sort(ve.begin(), ve.end(), cmp); //排序
    int sum = 0;
    for (vector <int> :: iterator it = ve.begin(); it != ve.end(); it++) { //输出
        it != ve.begin() && cout << ' ';
        cout << *it;
        sum += *it;
    }
    cout << endl;
    int ave = round(1.0 * sum / ve.size());
    cout << ave << endl; //平均身高
    int cnt = 0;
    for (vector <int> :: iterator it = ve.begin(); it != ve.end(); it++) { //不小于平均身高的人数
        if (*it < ave) break;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
