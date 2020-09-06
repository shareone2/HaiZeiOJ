#include <stdio.h>
char a[55] = {'\n'};
int i = 1;
int main() {
	while((a[i++] = getchar()) != '\n');
	for (i--; putchar(a[--i]) != '\n'; ); 
	return 0;
} 
