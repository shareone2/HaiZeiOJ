/*************************************************************************
	> File Name: 482编辑.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 05 Sep 2020 10:54:31 AM CST
 ************************************************************************/

#include <iostream>
#include <deque>

using namespace std;

deque <char> l, r;
string s;
int n;

void init() {
    int len = s.size();
    for (int i = 0; i < len; i++) { 
        l.push_back(s[i]);
    }
    return ;
}

void handle(char c) {
    switch (c) {
        case 'L': {
            if (l.empty()) break;
            r.push_front(*(l.end() - 1));
            l.pop_back();
            break;
        }
        case 'D': {
            if (r.empty()) break;
            l.push_back(r[0]);
            r.pop_front();
            break;
        }
        case 'B': {
            if (l.empty()) break;
            l.pop_back();
            break;
        }
        case 'P': {
            char c;
            cin >> c;
            l.push_back(c);
            break;
        }
    }
    return ;
}

void out_put(deque <char> de) {
    while (!de.empty()) {
        cout << de[0];
        de.pop_front();
    }
    return ;
}

int main() {
    cin >> s >> n;
    init(); //初始化左栈
    for (int i = 1; i <= n; i++) {
        char c;
        cin >> c;
        handle(c); //执行具体操作
    }
    out_put(l);
    out_put(r);
    cout << endl;
    return 0;
}
