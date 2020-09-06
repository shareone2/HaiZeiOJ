#include <stdio.h>

int n, x, cnt, base;

int main() {
    scanf("%d%d", &n, &x);
    for (int i = 1; i <= n; i++) {
        for (base = i; base; base /= 10) {
            base % 10 == x && ++cnt;
        }
    }
    printf("%d\n", cnt);
    return 0;
}