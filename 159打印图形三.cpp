#include <iostream>

using namespace std;

int main() {
    char c;
    cin >> c;
    for (int i = 0; i <= (int)c - 'A'; i++) {
        for (int j = 0; j < i; j++) {
            cout << ' ';
        }
        cout << (char)((int)c - i);
        for (int j = (int)c - i - 1; j >= 'A'; j--) {
            cout << (char)j;
        }
        for (int j = 'A'; j <= (int)c - i - 1; j++) {
            cout << (char)j;
        }
        cout << endl;
    }
    return 0;
}