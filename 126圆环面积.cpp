#include <iostream>
#include <iomanip>

using namespace std;

double r1, r2;

int main() {
    cin >> r1 >> r2;
    cout << fixed << setprecision(2) << (3.14 * (r1 * r1 - r2 * r2)) << endl;
    return 0;
}