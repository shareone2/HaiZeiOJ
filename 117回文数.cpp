#include <stdio.h>
#include <string.h>
char a[10];
int main() {
	scanf("%s", a);
	int x = strlen(a);
	for (int i = 0; i < x / 2; i++) {
		if (a[i] != a[x - 1 - i]) { 
		    printf("NO\n");
			return 0; 
		}
	}
	printf("YES\n");
	return 0;
}
