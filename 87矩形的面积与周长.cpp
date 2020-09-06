#include <iostream>
#include <iomanip>

using namespace std;

double a, b;

int main() {
    cin >> a >> b;
    cout << fixed << setprecision(2) << ((a + b) * 2) << '\n' << (a * b) << endl;
    return 0;
}