#include <stdio.h>

int month[13] = {0, 31, 28, 31, 30, 31, 30, 
                31, 31, 30, 31, 30, 31};


int check (int y, int m, int d) {
    if (y < 0 || m < 0 || d < 0) {
        return 0;
    }
    if (!(y % 4) && (y % 100) || !(y % 400)) {
        month[2] += 1;
    }
    return d <= month[m];
}

int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    printf("%s\n", check(y, m, d) ? "YES" : "NO");
    return 0;
}