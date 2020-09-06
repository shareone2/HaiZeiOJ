#include <stdio.h>
int n;
int main() {
    scanf("%d", &n);
    printf(!(n % 7) && (n & 1) ? "YES\n" : "NO\n");
    return 0;
}