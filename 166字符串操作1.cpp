#include <stdio.h>
#include <string.h>
char a[10005], b[10005];
int c, flog_x, i, j;
int main() {
	scanf("%s%d%s", a, &c, b);
	printf("%d\n", (strlen(a) > 100 ? 100 : strlen(a)));
	for (; i < c - 1; i++) {
	    if (a[i] == 'x') { flog_x = i + 1; } 
	    putchar(a[i]); 
	}
    for (; b[j] != '\0'; j++) {
	    if (b[j] == 'x') { flog_x = j + 1 + i; } 
	    putchar(b[j]); 
	}
    for (; a[i] != '\0'; i++) {
	    if (a[i] == 'x') { flog_x = i + 1 + j; } 
	    putchar(a[i]); 
	}
    putchar('\n');
    printf("%d\n", i + j + 1 - flog_x);
	return 0;
} 
