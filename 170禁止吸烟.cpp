#include <iostream>

using namespace std;

string base;
int n;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> base;
        int location = 0;
        while ((location = base.find("Ban_smoking")) != -1) {
            base.erase(location, 3);
            base.insert(location, "No");
        }
        cout << base << endl;
    }
    return 0;
}