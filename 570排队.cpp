/*************************************************************************
*File Name: 570排队.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Sun Oct 18 18:11:16 2020
 ************************************************************************/

#include <iostream>
#include <stack>
#define max_n 80000
using namespace std;

int n, num[max_n + 5], ans;
stack<int> sta;


// 输入
void init() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    return ;
}

// 处理
void handle() {
    for (int i = 0; i < n; i++) {
        while (!sta.empty() && num[i] >= sta.top()) sta.pop();
        ans += sta.size();
        sta.push(num[i]);
    }
    return ;
}

// 输出
void out_put() {
    cout << ans << endl;
    return ;
}

int main() {
    init();
    handle(); 
    out_put();
    return 0;
}
