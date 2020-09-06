#include <iostream>
#include <iomanip>

using namespace std;

double x;
int n;

int main() {
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        x = x * (1 + 0.06);
    }
    cout << fixed << setprecision(6) << x << endl;
    return 0;
}