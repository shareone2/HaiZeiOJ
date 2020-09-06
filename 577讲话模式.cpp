/*************************************************************************
	> File Name: 577讲话模式.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 05 Sep 2020 11:40:28 AM CST
 ************************************************************************/

#include <iostream>
#include <map>
#include <algorithm>
#include <cstdio>
#define max_n 1000000

using namespace std;

struct Node{
    string name;
    int num;
};

Node node[max_n];
map<string, int> ma;
int cnt = 1;

void init(string &s) {
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'A' && s[i] <=  'Z') s[i] += 32;
    }
    return ;
}

int find(string s) {
    if (!ma[s]) ma[s] = cnt++;
    return ma[s];
}

bool cmp(Node a, Node b) {
    if (a.num == b.num) return a.name < b.name;
    return a.num > b.num;
}

int main() {
    string s;
    while (cin >> s) {
        init(s);
        int x = find(s);
        node[x].name = s;
        node[x].num++;
        if (getchar() == '\n') break;
    }
    sort(node + 1, node + cnt, cmp);
    cout << node[1].name << ' ' << node[1].num << endl;
    return 0;
}
