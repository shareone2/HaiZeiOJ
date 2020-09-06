/*************************************************************************
	> File Name: 379仓库日志.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 05 Sep 2020 03:31:22 PM CST
 ************************************************************************/

#include <iostream>
#include <stack>
#include <queue>
#include <map>

using namespace std;

int n;
stack<int> s1;
priority_queue<int> que;
map<int, int> ma;

void add(int num) {
    ma[num]++;
    que.push(num);
    return ;
}

void del(int num) {
    ma[num]--;
    while (!que.empty() && !ma[que.top()]) {
        que.pop();
    }
    return ;
}

void handle(int x) {
    switch (x) {
        case 0: {
            int num;
            cin >> num;
            s1.push(num);
            add(num);
            break;
        }
        case 1: {
            if (s1.empty()) break;
            del(s1.top());
            s1.pop();
            break;
        }
        case 2: {
            cout << (que.empty() ? 0 : que.top()) << endl;
            break;
        }
    }
    return ;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        handle(x);
    }
    return 0;
}
