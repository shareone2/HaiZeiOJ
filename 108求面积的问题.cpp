#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

double m, n;

int main() {
    char c = getchar();
    cin >> m >> n;
    cout << fixed << setprecision(2) << (c == 'r' ? m * n : m * n / 2.0) << endl;
    return 0;
}