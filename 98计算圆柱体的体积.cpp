#include <stdio.h>

#define M 3.14

int main(){
    double r, h;
    scanf("%lf%lf", &r, &h);
    printf("%.2lf\n%.2lf\n", r * r * M, r * r * h * M);
    return 0;
}