#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;
    while (n) {
        if (n % 10 % 2 == 0) {
            cout << "YES" << endl;
            return 0;
        }
        n /= 10;
    }
    cout << "NO" << endl;
    return 0;
}