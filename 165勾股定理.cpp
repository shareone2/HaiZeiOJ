#include <iostream>
using namespace std;

int c, cnt, l, r;

int main() {
    cin >> c;
    l = 1;
    r = c - 1;
    while (l < r) {
        if (l * l + r * r == c * c) { cnt++, l++, r--; } 
        else if (l * l + r * r < c * c) { l++; } 
        else {  r++; }
    }
    cout << cnt << endl;
    return 0;
}
