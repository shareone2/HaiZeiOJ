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
    for (int i = 0; i < 10; i++) {
        cout << s[i] << endl;
    }
    return 0;
}