#include <stdio.h>
int main() {
	for (char c; (c = getchar()) != '\n'; c == ' ' ? printf("%%20") : putchar(c));
	return 0;
}
