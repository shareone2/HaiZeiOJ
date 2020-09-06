#include <iostream>
#include <climits>

using namespace std;

int n, mined = INT_MAX, maxed = INT_MIN;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num > maxed) {
            maxed = num;
        }
        if (num < mined) {
            mined = num;
        }
    }
    cout << maxed - mined << endl;
    return 0;
}