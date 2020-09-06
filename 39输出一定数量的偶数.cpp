#include <iostream>

using namespace std;

int be, n;

int main() {
    cin >> be >> n;
    be < 0 && (be = 0);
    (be % 2 != 0) && (be++);
    for (int i = 1; i <= n; i++) {
        cout << be << endl;
        be += 2;
    }
    return 0;
}