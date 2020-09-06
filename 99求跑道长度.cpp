#include <iostream>
#include <iomanip>

using namespace std;

double v, a;

int main() {
    cin >> v >> a;
    cout << fixed << setprecision(2) << v * v / (2 * a) << endl; 
    return 0;
}