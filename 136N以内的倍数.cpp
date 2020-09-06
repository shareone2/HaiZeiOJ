#include <stdio.h>
int n;
int main() {
    scanf("%d", &n);
    for (int i = 7; i <= n; i += 7) { printf("%d\n", i); }
    return 0;
}