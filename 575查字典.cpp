/*************************************************************************
	> File Name: 575查字典.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Sep  7 20:31:20 2020
 ************************************************************************/

#include <iostream>
#include <map>
using namespace std;

int n, m;
map<string, int> ma;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string str;
        int x;
        cin >> str >> x;
        ma[str] = x;
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        string str;
        cin >> str;
        cout << ma[str] << endl;
    }
    return 0;
}
