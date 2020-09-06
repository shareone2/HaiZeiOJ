#include <stdio.h>
int a, b = 1, c = 1, n;
int main() {
	scanf("%d", &n);
	for (int i = 3; i <= n; i++) {
		a = b;
		b = c;
		c = (a + b) % 1000000007;
	}
	printf("%d\n", c);
	return 0;
}
