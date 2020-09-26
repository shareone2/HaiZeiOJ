/*************************************************************************
	> File Name: 643向右看齐.cpp
	> Author: lsj
	> Mail: 2659002865@qq.com
	> Created Time: Sat Sep 26 19:33:54 2020
 ************************************************************************/

#include <iostream>
#include <stack>
#define max_n 100000
using namespace std;

struct node{
    int id, height;
};

stack <node> sta; //单调栈(大顶栈)
int look[max_n + 5];
node num[max_n + 5];

void handle(int x) {
    while (!sta.empty() && num[x].height >= sta.top().height) sta.pop();
    if (!sta.empty()) look[x] = sta.top().id;
    sta.push(num[x]);
    return ;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num[i].height;
        num[i].id = i;
    }
    for (int i = n; i >= 1; i--) {
        handle(i);
    }
    for (int i = 1; i <= n; i++) {
        cout << look[i] << endl;
    }
    return 0;
}
