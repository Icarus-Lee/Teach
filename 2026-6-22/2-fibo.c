#include <stdio.h>

int res[40] = {0, 1, 1};
int size    = 2;

int fibo(int n) {
    if (n <= size) return res[n];
    return res[++size] = fibo(n - 1) + fibo(n - 2);
}

int main() {
    for (int i = 1; i <= 40; ++i) {
        printf("%d: %d\n", i, fibo(i));
    }
    return 0;
}