#include <iostream>

using namespace std;

int arr[1010];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        char letter;
        int number;
        cin >> letter >> number;
        arr[(int)letter] = number;
    }
    string s;
    cin >> s;
    int sum = 0, len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            sum += arr[(int)s[i]];
        }
    }
    cout << sum << endl;
    return 0;
}