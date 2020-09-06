#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;
    int cnt = 65;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n + 1 - i; j++) {
            cout << (char)(cnt++);
        }
        cout << endl;
    }
    return 0;
}