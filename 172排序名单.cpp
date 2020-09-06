#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

string s[10];

int main() {
    for (int i = 0; i < 10; i++) {
        cin >> s[i];
    }
    sort(s, s + 10);
    for (string base : s) {
        cout << base << endl;
    }
    return 0;
}