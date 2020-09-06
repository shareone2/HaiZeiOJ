#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    cout << (!(n % m) ? n / m : n / m + 1) << endl;
    return 0;
}