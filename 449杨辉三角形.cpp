#include <iostream>

using namespace std;

int a[24], n;

int main() {
    a[1] = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j >= 1; j--) {
            a[j] = a[j] + a[j - 1];
            j != i && cout << ' ';
            cout << a[j];
        }
        cout << endl;
    }
    return 0;
}