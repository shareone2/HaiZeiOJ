#include <stdio.h>
#include <string.h>
char a[10005];
int main() {
	scanf("%s", a);
	printf((!((int)a[strlen(a) - 1] % 2)) ? "YES\n" : "NO\n");
	return 0;
}
