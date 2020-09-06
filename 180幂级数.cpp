#include <stdio.h>
int b;
long long ans = 1, base = 2;
int main() {
	scanf("%d", &b);
	for (; b > 0; b >>= 1) {
		if (b & 1) { ans = ans * base;}
		base *= base; 
	}
	printf("%lu\n", ans);
	return 0;
} 
