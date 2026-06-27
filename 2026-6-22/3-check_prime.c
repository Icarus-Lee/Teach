#include <stdbool.h>
#include <stdio.h>

const int kMaxN = 200;
bool      not_prime[205];

bool CheckPrime(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void Erato() {
    for (int i = 2; i <= kMaxN; ++i) {
        if (not_prime[i]) continue;
        for (int j = i * 2; j <= kMaxN; j += i) not_prime[j] = true;
    }
}

int main() {
    Erato();
    for (int i = 101; i <= 200; ++i) {
        if (!not_prime[i]) printf("%d\n", i);
    }
    return 0;
}