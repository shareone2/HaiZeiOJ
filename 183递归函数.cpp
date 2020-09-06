#include <stdio.h>
int n;
int dfs(int x);
int main() {
    scanf("%d", &n);
    printf("%d\n", dfs(n));
    return 0;
}
int dfs(int x) {
    if (x <= 0) return 0;
    if (x == 1) return 1;
    return 3 * dfs((x + 1)>> 1) - 1; 
}
