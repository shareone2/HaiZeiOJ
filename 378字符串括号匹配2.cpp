/*************************************************************************
	> File Name: 378字符串括号匹配2.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Sat 05 Sep 2020 05:23:06 PM CST
 ************************************************************************/

#include <iostream>
#include <stack>

using namespace std;

stack <char> sta;
string str;

bool handle(char c) {
    if (c == '(' || c == '[' || c == '{') {
        sta.push(c);
        return 1;
    } else if (c == ')') {
        if (sta.top() == '(') {
            sta.pop();
            return 1;
        }
    } else if (c == ']') {
        if (sta.top() == '[') {
            sta.pop();
            return 1;
        }
    } else if (c == '}') {
        if (sta.top() == '{') {
            sta.pop();
            return 1;
        }
    }
    return 0;
}

bool another(char c) {
    if (c == '(' || c == ')' || c == '[' || c == ']' || c == '{' || c == '}') return 0;
    return 1;
}

int main() {
    getline(cin, str);
    int len = str.length();
    for (int i = 0; i < len - 1; i++) {
        if (another(str[i]) || handle(str[i])) continue;
        cout << "NO" << endl;
        return 0;
    }
    cout << (sta.empty() ? "YES" : "NO") << endl;
    return 0;
}
