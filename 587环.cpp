/*************************************************************************
*File Name: 587环.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Sun Oct 18 19:14:50 2020
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int n, num[4], a, b, c;
deque<int> de;

// 初始化
void init() {
    cin >> n >> num[0] >> num[1] >> num[2];
    a = num[0];
    b = num[1];
    c = num[2];
    sort(num, num + 3);
    return ;
}

// 判断
bool judge() {
    for (int i = 0; i < 3; i++) {
        de.push_back(num[i]);
    }
    for (int i = 0; i < 3; i++) {
        if (de[0] == a && de[1] == b && de[2] == c) return true;
        de.push_back(de.front());
        de.pop_front();
    }
    return false;
}

int main() {
    init();
    cout << (judge() ? 1 : 0) << endl; 
    return 0;
}
