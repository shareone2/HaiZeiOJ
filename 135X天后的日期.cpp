/*************************************************************************
	> File Name: 135X天后的日期.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Mon 10 Aug 2020 09:16:17 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int year, month, day, x;
int arr[14] = {
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

void next() {
    day++;
    arr[2] = (!(year % 400) || (!(year % 4) && (year % 100)) ? 29 : 28);
    if (day - 1 == arr[month]) month++, day = 1;
    if (month > 12) month = 1, year++;
    return ;
}

int main() {
    cin >> x >> year >> month >> day;
    while (x--) next();
    cout << year << ' ' << month << ' ' << day << endl;
    return 0;
}
