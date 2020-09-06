#include <iostream>

using namespace std;

int a, b;

int main() {
    cin >> a >> b;
    bool flog = false;
    for (int i = a; i <= b; i++) {
        if (!(i % 11)) {
            (!flog && cout << i) || (cout << ' ' << i);
            flog = true;
        }
    }
    cout << endl;
    return 0;
}