#include <stdio.h>
int n, ans, base;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &base);
		if (base > ans) { ans = base; }
	}
	printf("%d\n", ans);
	return 0;
} 
