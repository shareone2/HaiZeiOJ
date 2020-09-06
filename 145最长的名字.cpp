#include <iostream>

using namespace std;

int n;
string maxed = "";

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        string base;
        cin >> base;
        if (base.length() >= maxed.length()) {
            maxed = base;
        }
    }
    cout << maxed << endl;
    return 0;
}