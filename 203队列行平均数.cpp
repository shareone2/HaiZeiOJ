#include <stdio.h>
int n, m, num, sum;
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++, sum = 0) {
        for (int j = 1; j <= m; j++, sum += num) { scanf("%d", &num); }
        printf("%f\n", ((double)sum / (float)m));
    }
    return 0;
}