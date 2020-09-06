#include <iostream>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;

int n;
priority_queue <string, vector <string>, greater <string> > ve;

int main() {
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int len = s.length();
        if (s[0] >= 97) {
            s[0] -= 32;
        }
        for (int j = 1; j < len; j++) {
            if (s[j] >= 65 && s[j] <= 91) {
                s[j] += 32;
            }
        }
        ve.push(s);
    }
    while (!ve.empty()) {
        cout << ve.top() << endl;
        ve.pop();
    }
    return 0;
}