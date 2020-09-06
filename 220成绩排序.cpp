/*************************************************************************
	> File Name: 220成绩排序.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 07:24:47 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

typedef struct student {
    int a, b, c, d;
    string name;
} Student;

int n;
Student arr[105];

bool cmp_1(Student a, Student b) {
    if (a.a == b.a) {
        return a.name < b.name;
    }
    return a.a > b.a;
}

bool cmp_2(Student a, Student b) {
    if (a.b == b.b) {
        return a.name < b.name;
    }
    return a.b > b.b;
}

bool cmp_3(Student a, Student b) {
    if (a.c == b.c) {
        return a.name < b.name;
    }
    return a.c > b.c;
}

bool cmp_4(Student a, Student b) {
    if (a.d == b.d) {
        return a.name < b.name;
    }
    return a.d > b.d;
}

bool cmp_5(Student a, Student b) {
    if (a.a + a.b + a.c + a.d == b.a + b.b + b.c + b.d) {
        return a.name < b.name;
    }
    return a.a + a.b + a.c + a.d > b.a + b.b + b.c + b.d;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i].name >> arr[i].a >> arr[i].b >> arr[i].c >> arr[i].d;
    }
    sort(arr + 1, arr + n + 1, cmp_1);
    for (int i = 1; i <= 4; i++) {
        if (i != 1) {
            cout << ' ';
        }
        cout << arr[i].name;
    }
    cout << endl;
    sort(arr + 1, arr + n + 1, cmp_2);
    for (int i = 1; i <= 4; i++) {
        if (i != 1) {
            cout << ' ';
        }
        cout << arr[i].name;
    }
    cout << endl;
    sort(arr + 1, arr + n + 1, cmp_3);
    for (int i = 1; i <= 4; i++) {
        if (i != 1) {
            cout << ' ';
        }
        cout << arr[i].name;
    }
    cout << endl;
    sort(arr + 1, arr + n + 1, cmp_4);
    for (int i = 1; i <= 4; i++) {
        if (i != 1) {
            cout << ' ';
        }
        cout << arr[i].name;
    }
    cout << endl;
    sort(arr + 1, arr + n + 1, cmp_5);
    for (int i = 1; i <= 4; i++) {
        if (i != 1) {
            cout << ' ';
        }
        cout << arr[i].name;
    }
    cout << endl;
    return 0;
}
