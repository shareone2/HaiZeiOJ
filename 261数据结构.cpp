#include <iostream>
#include <stack>
#include <cmath>

#define MAX_N 1000

using namespace std;

stack <long long> s1, s2;
long long sum[MAX_N + 5], maxed[MAX_N + 5];

int main() {
    maxed[0] = 0x8000000000000000LL;
    int n;
    cin >> n;
    while (n--) {
        char s[10];
        cin >> s;
        switch (s[0]) {
            case 'I': {
                long long x;
                cin >> x;
                s1.push(x);
                int len = s1.size();
                sum[len] = sum[len - 1] + x;
                maxed[len] = max(maxed[len - 1], sum[len]); 
            }; break;
            case 'D': {
                if (s1.empty()) {
                    break;
                }
                s1.pop();
            }; break;
            case 'L': {
                if (s1.empty()) {
                    break;
                }
                s2.push(s1.top());
                s1.pop();
            }; break;
            case 'R': {
                if (s2.empty()) {
                    break;
                }
                long long x = s2.top();
                s2.pop();
                s1.push(x);
                int len = s1.size();
                sum[len] = sum[len - 1] + x;
                maxed[len] = max(maxed[len - 1], sum[len]);
            }; break;
            case 'Q': {
                int location;
                cin >> location;
                cout << maxed[location] << endl;
            };
        }
    } 
    return 0;
}
