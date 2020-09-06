#include <iostream>
#include <cmath>

using namespace std;

int a[3];

int main() {
    cin >> a[0] >> a[1] >> a[2];
    int maxed = 0, sum_1 = 0, sum_2 = 0;
    for (int i = 1; i < 3; i++) {
        if (a[maxed] < a[i]) {
            maxed = i;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (i != maxed) {
            sum_1 += pow(a[i], 2);
            sum_2 += a[i];
        }
    }
    if (sum_2 < a[maxed]) {
        cout << "illegal triangle" << endl;
    } else if (sum_1 > pow(a[maxed], 2)) {
        cout << "acute triangle" << endl;
    } else if (sum_1 == pow(a[maxed], 2)) {
        cout << "right triangle" << endl;
    } else {
        cout << "obtuse triangle" << endl;
    }
    return 0;
}