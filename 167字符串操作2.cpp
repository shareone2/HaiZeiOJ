#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

string A, B;
int n;

int main() {
    getline(cin, A);
    cin >> n;
    getchar();
    getline(cin, B);
    cout << A.length() << endl;
    cout << A.find('a') + 1 << endl;
    A.insert(n - 1, B);
    cout << A << endl;
    return 0;
}