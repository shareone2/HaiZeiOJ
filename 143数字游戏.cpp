#include <iostream>
#include <cmath>

using namespace std;

int a, b, cnt, flog;

int is_prime(int x);
int quan(int x);
int shuchu(int x);

int main() {
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        !(i % 6) && is_prime(i / 100) && quan(i % 100) && shuchu(i) && ++cnt;
    }
    cout << endl << cnt << endl; 
    return 0;
}

int is_prime(int x) {
    if (x == 2) { return 1; }
    if (x < 2 || !(x % 2)) { return 0; }
    for (int i = 3; i <= floor(sqrt(x) + 0.5); i += 2) { if (!(x % i)) { return 0; } }
    return 1;
}

int quan(int x) {
    for (int i = 1; i <= 9; i++) { if (i * i == x) { return 1; } }
    return 0;
}

int shuchu(int x) {
    flog == 1 && cout << ' ' << x;
    flog == 0 && cout << x;
    flog = 1;
    return 1;
}