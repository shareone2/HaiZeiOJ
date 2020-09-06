/*************************************************************************
> File Name: 216获取姓名并排序.cpp
> Author: LiShiJie
> Mail: 2659002865@qq.com
> Created Time: Fri 31 Jul 2020 06:42:24 PM CST
************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int n;
string student[105];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> student[i];
        student[i] = student[i].substr(3, student[i].size());
    }
    sort(student + 1, student + n + 1);
    for (int i = 1; i <= n; i++) {
        cout << student[i] << endl;
    }
    return 0;
}
