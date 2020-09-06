#include <iostream>
#include <iomanip>

using namespace std;

double c;

int main() {
    cin >> c;
    cout << fixed << setprecision(2) << 1.8 * c + 32.0 << endl;
    return 0;
}