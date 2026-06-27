#include <stdio.h>

int PrimeFactorization(int n, int* res, int len) {
    if (res == NULL) return 0;
    int ind = 0;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            n /= i;
            res[ind++] = i;
        }
        if (ind == len) return len;
    }
    if (n > 1) res[ind++] = n;
    return ind;
}

int main() {
    int n = 180;
    int res[50];
    int len = PrimeFactorization(n, res, 50);
    for (int i = 0; i < len; ++i) printf("%dx", res[i]);
    printf("\b ");
    return 0;
}