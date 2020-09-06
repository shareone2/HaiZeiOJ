/*************************************************************************
	> File Name: 569溶液模拟器.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 05 Sep 2020 07:45:45 PM CST
 ************************************************************************/

#include <iostream>
#include <stack>
#include <iomanip>

using namespace std;

stack< pair<int, double> > sta;

void init() {
    int v;
    double c;
    cin >> v >> c;
    sta.push(make_pair(v, c));
    return ;
}

void add(int v2, double c2) {
    int v1 = sta.top().first;
    double c1 = sta.top().second;
    int v3 = v1 + v2;
    double c3 = (v1 * c1 + v2 * c2) / v3;
    cout << v3 << ' ';
    cout << fixed << setprecision(5) << c3 << endl;
    sta.push(make_pair(v3, c3));
    return ;
}

void det() {
    if (sta.size() != 1) sta.pop();
    cout << sta.top().first << ' ';
    cout << fixed << setprecision(5) << sta.top().second << endl;
    return ;
}

int main() {
    init();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        char c;
        cin >> c;
        if (c == 'P') {
            int v;
            double c;
            cin >> v >> c;
            add(v, c);
        } else {
            det();
        }
    }
    return 0;
}
