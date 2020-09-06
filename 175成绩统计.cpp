#include <stdio.h>
int num[11], n;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[0]);
		num[num[0] / 10]++;
	}
	printf("You %d\nLiang %d\nZhong %d\nCha %d\n", num[9] + num[10], num[8], num[6] + num[7], num[1] + num[2] + num[3] + num[4] + num[5]);
	return 0;
} 
