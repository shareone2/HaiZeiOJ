/*************************************************************************
	> File Name: 156数值计算.cpp
	> Author: LiShiJie
	> Mail: 2659002865@qq.com
	> Created Time: Tue 28 Jul 2020 02:41:10 PM CST
 ************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int num) {
    if (!(num % 2)) {
        return false;
    }
    for (int i = 3; i <= floor(sqrt(num) + 0.5); i++) {
        if (!(num % i)) {
            return false;
        }
    }
    return true;
}

bool perfect_square(int num) {
    if (pow(floor(sqrt(num) + 0.5), 2) == num) {
        return true;
    }
    return false;
}

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (is_prime(i) && perfect_square(i / 100) && perfect_square(i % 100)) {
            if (cnt) {
                cout << ' ';
            }
            cout << i;
            cnt++;
        }
    }
    cout << endl << cnt << endl;
    return 0;
}
