/*************************************************************************
*File Name: 595程序调用关系.cpp
*Author: LiShiJie
*mail: 2659002865@qq.com
*Created Time: Tue Oct 20 22:31:31 2020
 ************************************************************************/

#include <iostream>
#include <deque>
#define max_n 100000
using namespace std;

int n;
string func[max_n + 5];
string func_end;
deque<string> de;

// 输入 
void init() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> func[i];
    }
    cin >> func_end;
    return ;
}

// 处理
bool handle() {
    for (int i = 0; i < n; i++) {
        if (func[i] == "return") {
            de.pop_back();
        } else {
            de.push_back(func[i]);
            if (func[i] == func_end) {
                return true;
            }
        }
    }
    return false;
}

// void输出
void out_put(bool flog) {
    if (flog) {
        int len = de.size();
        for (int i = 0; i < len; i++) {
            i && cout << "->";
            cout << de[i];
        }
    } else {
        cout << "NOT REFERENCED";
    }
    cout << endl;
    return ;
}

int main() {
    init();
    out_put(handle());
    return 0;
}
