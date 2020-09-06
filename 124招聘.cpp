/*************************************************************************
	> File Name: 124招聘.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Mon 10 Aug 2020 06:42:45 PM CST
 ************************************************************************/

#include <iostream>

using namespace std;

int edu, ran, age, year;

int main() {
    cin >> edu >> ran >> age >> year;
    cout << ((edu >= 1 || ran <= 50) && (age <= 25 || year >= 5) ? "ok" : "pass") << endl;
    return 0;
}
