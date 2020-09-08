/*************************************************************************
	> File Name: 567钻石收集者.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Tue Sep  8 19:32:53 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int n, k, pail[20010];

int add(int x) {
    int sum = 0;
    for (int i = x; i <= x + k; i++) {
        sum += pail[i];
    }
    return sum;
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        pail[a]++;
    }
    int maxed = 0;
    for (int i = 0; i <= 10000; i++) {
        int base = add(i);
        if (maxed < base) maxed = base; 
    }
    cout << maxed << endl;
    return 0;
}
