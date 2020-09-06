#include <iostream>
#include <cstring>

using namespace std;

string x, y;

int main() {
    cin >> x >> y;
    if (x == y) {
        cout << 100 << endl;
    } else {
        int sum = 0;
        for (int i = 0; i < x.length(); i++) {
            for (int j = 0; j < y.length(); j++) {
                if (x[i] == y[j]) {
                    sum++;
                    break;
                }
            }
        }
        if (sum == 2) {
            cout << 20 << endl;
        } else if (sum == 1) {
            cout << 2 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}