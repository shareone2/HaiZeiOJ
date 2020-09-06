#include <iostream>

using namespace std;

char x;

int main() {
    cin >> x;
    switch (x) {
    case 'a':
        cout << "It is good" << endl;
        break;
    case 'b':
        cout << "OMG" << endl;
        break;
    default:
        cout << "Yes!" << endl;
        break;
    }
    return 0;
}