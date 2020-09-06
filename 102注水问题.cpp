#include <iostream>
#include <iomanip>

using namespace std;

double a, b, c, t;

int main() {
    cin >> a >> b >> c >> t;
    cout << fixed << setprecision(2) << t + (1.0 - t / a - t / b) / (1.0 / a + 1.0 / b - 1.0 / c) << endl;
    return 0;
}