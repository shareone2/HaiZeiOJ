/*************************************************************************
	> File Name: 642牛线.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Sat Sep 26 19:07:38 2020
 ************************************************************************/

#include <iostream>
#include <deque>
using namespace std;

deque <int> deq;
int cnt = 1;

void add(char tmp) {
    if (tmp == 'L') deq.push_front(cnt);
    else deq.push_back(cnt);
    cnt++;
    return ;
}

void del(char tmp, int num) {
    if (tmp == 'L') {
        while (num--) {
            deq.pop_front();
        }
    } else {
        while (num--) {
            deq.pop_back();
        }
    }
    return ;
}

void handle(char c) {
    char tmp;
    cin >> tmp;
    switch (c) {
        case 'A':
            add(tmp);
            break;
        case 'D':
            int num;
            cin >> num;
            del(tmp, num);
            break;
    }
    return ;
}

void output() {
    while (!deq.empty()) {
        cout << deq[0] << endl;
        deq.pop_front();
    }
    return ;
}

int main() {
    int s;
    cin >> s;
    for (int i = 1; i <= s; i++) {
        char c;
        cin >> c;
        handle(c);
    }
    output();
    return 0;
}
