#include <iostream>

using namespace std;

char a, b;

int main() {
    cin >> a >> b;
    if (a == b) {
        cout << "TIE" << endl;
    } else if (a == 'O') {
        b == 'Y' && cout << "MING" << endl;
        b == 'H' && cout << "LI" << endl;
    } else if (a == 'Y') {
        b == 'H' && cout << "MING" << endl;
        b == 'O' && cout << "LI" << endl;
    } else {
        b == 'O' && cout << "MING" << endl;
        b == 'Y' && cout << "LI" << endl;
    }
    return 0;
}