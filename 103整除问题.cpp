#include <iostream>
#include <cstdio>

using namespace std;

int read();

int main() {
    cout << (read() % read() == 0 ? "YES" : "NO") << endl;
    return 0;
}

int read() {
    int x = 0;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + int(ch - '0');
        ch = getchar();
    }
    return x;
}