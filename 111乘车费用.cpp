#include <iostream>
#include <iomanip>

using namespace std;

int n;

int main() {
    cin >> n;
    if (n <= 3) {
        cout << 14 << endl;
    } else {
        cout << fixed << setprecision(1) << (n - 3) * 2.3 + 14 << endl; 
    }
    return 0;
}