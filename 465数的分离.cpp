#include <iostream>
#include <cmath>

using namespace std;

long long n, k;

int main() {
    cin >> n >> k;
    n /= pow(10, k - 1);
    cout << n % 10 << endl;
    return 0;
}