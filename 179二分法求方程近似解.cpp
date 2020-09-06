#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() {
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) {
    double l = -20, r = 20, mid = 0;
    for (double y = f(p, q, mid); fabs(y) > EPSILON; y = f(p, q, mid)) {
        if (p > 0) {
            (y > 0 ? r : l) = mid;
        } else {
            (y > 0 ? l : r) = mid;
        }
        mid = (l + r) / 2;
    }
    return mid;
}

double f(int p, int q, double x) {
    return p * x + q;
}