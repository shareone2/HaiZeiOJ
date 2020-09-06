#include <iostream>
#define num 8000009

using namespace std;

bool is_prime[num];
int prime[num], cnt, l, r, mind = num, x1, x2, maxd = 0, y1, y2;

void ss(int a, int b);

int main() {
    cin >> l >> r;
    is_prime[0] = is_prime[1] = 1;
    for (int i = 2; i <= r; i++) {
        !is_prime[i] && (prime[cnt++] = i);
        ss(cnt - 1, cnt - 2);
        for (int j = 0; j < cnt && i * prime[j] <= r; j++) {
            is_prime[i * prime[j]] = 1;
            if(!(i % prime[j])) { break; }
        }
    }
    (maxd && cout << x1 << ',' << x2 << " are closest, " << y1 << ',' << y2 << " are most distant." << endl) || (!maxd && cout << "There are no adjacent primes." << endl);
    return 0;
}

void ss(int a, int b) {
    if (b < 0 || prime[a] < l || prime[a] > r || prime[b] < l || prime[b] > r) { return ;}
    (prime[a] - prime[b] < mind) && (mind = prime[a] - prime[b]) && (x1 = prime[b]) && (x2 = prime[a]);
    (prime[a] - prime[b] > maxd) && (maxd = prime[a] - prime[b]) && (y1 = prime[b]) && (y2 = prime[a]);
    return ;
}