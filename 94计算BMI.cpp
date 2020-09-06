#include <iostream>
#include <iomanip>

using namespace std;

double w, h;

int main() {
    cin >> w >> h;
    cout << fixed << setprecision(2) << w / (h * h) << endl;
    return 0;
}