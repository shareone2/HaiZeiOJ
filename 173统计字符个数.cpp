#include <stdio.h>
char a;
int x1, x2, x3, x4;
int main() {
	while ((a = getchar()) != '\n') {
		if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) {
        	x1++;
		} else if (a >= '0' && a <= '9') {
			x2++;
		} else if (a == ' ') {
			x3++;
		} else { x4++; }
	}
	printf("%d %d %d %d\n", x1, x2, x3, x4);
	return 0;
} 
