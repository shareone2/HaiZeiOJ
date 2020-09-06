#include <iostream>
#include <iomanip>

#define M 3.14

using namespace std;

double r;

int main() {
    cin >> r;
    cout << fixed << setprecision(2) << 2.0 * M * r << '\n' << M * r * r << endl;
    return 0;
}