#include <iostream>
#include <cstring>

using namespace std;

int n, sum = 0;

bool judge(int num);

int main() {
    cin >> n;
    sum += (n > 9 ? 9 : n);
    for (int i = 10; i <= n; i++) {
        if (judge(i)) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}

bool judge(int num) {
    string s = to_string(num);
    int len = s.length();
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            return false;
        }
    }
    return true;
}