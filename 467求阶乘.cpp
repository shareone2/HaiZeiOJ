#include <stdio.h>
int n;
long long ans = 1;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) { ans *= i; }
	printf("%lu\n", ans);
	return 0;
}
