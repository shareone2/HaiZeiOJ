#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;
    bool flog = false;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            flog && cout << '\t';
            cout << i << '*' << j << '=' << (i * j);
            flog = true;
        }
        i != n && cout << '\n';
        flog = false;
    }
    return 0;
}