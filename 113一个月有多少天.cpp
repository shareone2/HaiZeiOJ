#include <iostream>

using namespace std;

int y, m, month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    cin >> y >> m;
    if (m == 2) {
       cout << (!(y % 4) && (y % 100) || !(y % 400) ? 29 : month[1]) << endl;    
    } else {
       cout << month[m - 1] << endl;
    }
    return 0;
}