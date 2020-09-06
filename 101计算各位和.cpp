#include <iostream>

using namespace std;

int n, sum;

int main() {
    cin >> n;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}