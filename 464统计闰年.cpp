#include <iostream>

using namespace std;

int x, y;

int main() {
    int sum = 0;
    cin >> x >> y;
    for (int i = x; i <= y; i++) {
        if (!(i % 400) || !(i % 4) && (i % 100)) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}