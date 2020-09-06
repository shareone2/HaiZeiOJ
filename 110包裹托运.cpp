#include <iostream>
#include <iomanip>

using namespace std;

double x;

int main() {
    cin >> x;
    cout << fixed << setprecision(2) << (x > 15 ? 15 * 6 + (x - 15) * 9: x * 6) << endl;
    return 0;
}