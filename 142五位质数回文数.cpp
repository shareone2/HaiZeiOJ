#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int a, b;
bool prime(int num);
bool palindrome(int num);

int main() {
    cin >> a >> b;
    bool flog = false;
    for (int i = a; i <= b; i++) {
        if (prime(i) && palindrome(i)) {
            (flog == true && cout << ' ' << i) || (flog == false && cout << i && (flog = true));
        }
    }
    cout << endl;
    return 0;
}

bool prime(int num) {
    if (!(num % 2)) {
        return false;
    }
    int sq = sqrt(num);
    for (int i = 3; i <= sq; i += 2) {
        if (!(num % i)) {
            return false;
        }
    }
    return true;
}

bool palindrome(int num) {
    string s = to_string(num);
    if (s[0] == s[4] && s[1] == s[3]) {
        return true;
    }
    return false;
}