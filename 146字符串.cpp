#include <stdio.h>
int main() {
	for (char c; (c = getchar()) != '\n'; c >= 'A' && c <= 'Z' ? (c == 'Z' ? putchar('A') : putchar((char)(c + 1))) : (c >= 'a' && c <= 'z' ? (c == 'z' ? putchar('a') : putchar((char)(c + 1))) : putchar(c))); 
	return 0;
} 
