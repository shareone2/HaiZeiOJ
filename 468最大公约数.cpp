#include <stdio.h>
int m, n;
int gcd (int a, int b) { return b ? gcd(b, a % b) : a; }
int main() {
	scanf("%d%d", &m, &n);
	printf("%d\n", gcd(m, n));
	return 0;
} 
