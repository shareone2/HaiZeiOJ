#include <stdio.h>
float a;
int main() {
    scanf("%f", &a);
    printf("%g\n", a < 0 ? -a : a);
    return 0;
}