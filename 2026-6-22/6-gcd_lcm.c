#include <stdio.h>

void swap(int* a, int* b);
int  gcd(int a, int b);
int  lcm(int a, int b);

int main() {
    int a = 6, b = 18;
    printf("gcd = %d\n", gcd(a, b));
    printf("lcm = %d\n", lcm(a, b));
    return 0;
}

inline void swap(int* a, int* b) {
    int tmp = *a;
    *a      = *b;
    *b      = tmp;
}

int gcd(int a, int b) {
    if (a < b) {
        swap(&a, &b);
    }
    return a % b == 0 ? b : gcd(b, a % b);
}

int lcm(int a, int b) { return a * b / gcd(a, b); }