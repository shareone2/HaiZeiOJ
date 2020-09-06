#include <stdio.h>
int main() {
    for (char a; (a = getchar()) != '\n'; putchar((a >= 'a' ? (char)(a - 32) : (char)(a + 32))));
    return 0;
}