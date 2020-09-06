#include <stdio.h>

int num[55];

int step(int n) {
    if (n < 2) {
        return 0;
    }
    if (num[n]) {
        return num[n];
    }
    return num[n] = step(n - 2) + step(n - 3);
}

int main() {
    num[2] = 1;
    num[3] = 1;
    int n;
    scanf("%d", &n);
    printf("%d\n", step(n));
    return 0;
}