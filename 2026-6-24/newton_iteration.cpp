#include <math.h>
#include <stdio.h>
#define eps 1e-7

double NewtonIteration(double x_k, double n) {
    double x_kk = (x_k * x_k + n) / (2 * x_k);
    if (fabs(x_kk - x_k) < eps) return x_kk;
    return NewtonIteration(x_kk, n);
}

int main() {
    printf("x = %lf\n", NewtonIteration(6, 6));
    printf("x = %lf", sqrt(6));
    return 0;
}