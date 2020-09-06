#include <stdio.h>
int n, base, ans = 2147000000;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &base);
		if (ans > base) { ans = base; }
	}
	printf("%d\n", ans); 
	return 0;
}
