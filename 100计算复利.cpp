#include <iostream>
#include <iomanip>

using namespace std;

double n, ans;

int main() {
    cin >> n;
    for (int i = 1; i <= 6; i++) {
        ans = (n + ans) * (1.00417);
    }
    cout << fixed << setprecision(2) << '$' << ans << endl;
    return 0;
}