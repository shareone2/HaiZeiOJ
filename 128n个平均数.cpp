#include <iostream>
#include <iomanip>

using namespace std;

int n;
double sum;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        double base = 0.0;
        cin >> base;
        sum += base;
    }
    cout << fixed << setprecision(2) << (sum / n) << endl;
    return 0;
}