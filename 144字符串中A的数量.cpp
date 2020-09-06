#include <iostream>
#include <cstring>

using namespace std;

string s;
int sum = 0;

int main() {
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] == 'A') {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}