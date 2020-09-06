#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = i * 2; j; j--) {
            cout << 'A';
        }
        cout << endl;
    }
    return 0;
}