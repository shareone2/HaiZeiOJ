/*************************************************************************
	> File Name: 576最大收益.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Sep  7 21:59:59 2020
 ************************************************************************/

#include <iostream>
#include <map>
using namespace std;

int n, k;
map<string, pair<int, int> > ma;

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        string str;
        cin >> str;
        cin >> ma[str].first >> ma[str].second;
    }
    long long ans = 0;
    for (int i = 1; i <= k; i++) {
        string str;
        int a;
        cin >> str >> a;
        ans += ma[str].first * a;
        if (a > ma[str].second) {
            cout << "-" << i << endl;
            return 0;
        }
        ma[str].second -= a;
    }
    cout << ans << endl;
    return 0;
}
