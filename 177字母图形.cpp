#include <iostream>
#include <cstring>

using namespace std;

string s1;

int main() {
    cin >> s1;
    int len = s1.length();
    for (int i = 1; i <= len; i++) {
        cout << s1 << endl;
        string base = s1.substr(len - 2, len);
        s1.erase(len - 2);
        s1.insert(0, base);
    }
    return 0;
}