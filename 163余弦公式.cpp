#include <stdio.h>
#include <math.h>
double a, b, s;
int main() {
	scanf("%lf%lf%lf", &a, &b, &s);
	printf("%lf", sqrt(pow(a, 2) + pow(b, 2) - 2.0 * a * b * cos(s * acos(-1) / 180.0)));
	return 0;
}
