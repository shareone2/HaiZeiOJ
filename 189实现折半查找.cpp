#include <stdio.h>

int n, k;

int find(int x, int *num) {
    int l = 0, r = n;
    while (l < r) {
        int mid = (l + r) / 2;
        if (num[mid] == x) {
            return mid + 1;
        } else if (x < num[mid]) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}

int main() {
    while (scanf("%d%d", &n, &k) != EOF) {
        int numbers[n + 5];
        for (int i = 0; i < n; i++) {
            scanf("%d", &numbers[i]);
        }
        int flog = 0;
        for (int i = 1; i <= k; i++) {
            int num;
            scanf("%d", &num);
            int location = find(num, numbers);
            if (flog == 1) {
                    printf(" ");
            }
                flog = 1;
            if (location != -1) {
                printf("%d", location);
            } else {
                printf("0");
            }
        }
    }
    return 0;
}