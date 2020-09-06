/*************************************************************************
	> File Name: 202身高排序.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 01:25:06 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

typedef struct student{
    int height, data;
} Student;

bool cmp(Student a, Student b) {
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;
    Student num[n + 5];
    for (int i = 1; i <= n; i++) {
        cin >> (num[i].height);
        num[i].data = i;
    }
    stable_sort(num + 1, num + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            cout << ' ';
        }
        cout << num[i].data;
    }
    cout << endl;
    return 0;
}
