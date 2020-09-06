#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double r, h;

int main() {
    cin >> r >> h;
    cout << fixed << setprecision(2) << 
        (3.14 + 4.0) * pow(r, 2) + 3.14 * r * h + 
        2 * r * h + sqrt(pow(2 * r, 2) + pow(2 * r, 2)) * h
        << endl;
    return 0;
}