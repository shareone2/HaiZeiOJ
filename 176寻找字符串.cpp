#include <iostream>
#include <cstring>

using namespace std;

string s_1, s_2;
int sum = 0, location = 0;

int main() {
    getline(cin, s_1);
    getline(cin, s_2);
    for (; (location = s_1.find(s_2, location)) != -1; sum++) {
        location++;
    }
    cout << sum << endl;
    return 0;
}