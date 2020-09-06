#include <iostream>
#include <cstring>

using namespace std;

string s = "";

int main() {
    cin >> s;
    cout << (s.find("9") != -1? "YES" : "NO") << endl;
    return 0;
}