/*************************************************************************
	> File Name: 215评奖1.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Fri 31 Jul 2020 06:21:16 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

typedef struct student {
    string name;
    int sum;
} Student;

bool cmp(Student a, Student b) {
    return a.sum > b.sum;
}

Student arr[50];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i].name; //姓名
        for (int j = 1; j <= 4; j++) { //各科成绩
            int base;
            cin >> base;
            arr[i].sum += base;
        }
    }
    sort(arr + 1, arr + n + 1, cmp);
    for (int i = 1; i <= 3; i++) {
        cout << arr[i].name << endl;
    }
    return 0;
}
