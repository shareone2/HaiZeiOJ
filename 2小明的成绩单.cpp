#include <stdio.h>
int a;
int main() {
	scanf("%d", &a);
	if(a >= 85) {
		printf("A\n");
	} else if (a >= 75) {
		printf("B\n");
	} else if (a >= 60) {
		printf("C\n");
	} else {
		printf("D");
	}
	return 0;
}
