/*************************************************************************
	> File Name: 34闰年.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Thu Sep 10 23:22:04 2020
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    cout << ((!(year % 4) && (year % 100)) || !(year % 400) ? "L" : "N") << endl; 
    return 0;
}
