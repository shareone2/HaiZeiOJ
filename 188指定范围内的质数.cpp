#include <stdio.h>
#include <string.h>

int n = 1000000;
int mark[1000001];

int main() {
    int c;
    memset(mark, 0, sizeof(mark));
    mark[0] = 1;
    mark[1] = 1;
    int m = 0;
    scanf("%d%d", &n, &m);
    for (c = 2; c * c <= n; c++) {
        for (int i = 2; i <= n / c; i++) {
            mark[i * c] = 1;
        }
    }
    for (int j = m; j <= n; j++) {
        if (!mark[j]) {
            printf("%d\n", j);
        }
    }
    return 0;
}