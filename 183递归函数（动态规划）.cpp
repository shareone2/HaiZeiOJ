#include <stdio.h>
int n, num[100008] = {0, 1};
int main() {
	while (~scanf("%d", &n)) {
		if (!num[n] && n > 1){
			for (int flog = 2; flog <= n; flog++) {
				num[flog] = 3 * num[(flog + 1) >> 1] - 1;
			}
	    }
		printf("%d\n", num[n <= 0 ? 0 : n]);
    }
	return 0;
}

