#include <stdio.h>

int GetUnits(int n);
int GetTens(int n);
int GetHundreds(int n);
int pow3(int n);

int main() {
    for (int i = 106; i <= 963; ++i) {
        int units    = GetUnits(i);
        int tens     = GetTens(i);
        int hundreds = GetHundreds(i);
        int sum      = pow3(units) + pow3(tens) + pow3(hundreds);
        if (sum == i) printf("%d\n", i);
    }
    return 0;
}

inline int GetUnits(int n) { return n % 10; }

inline int GetTens(int n) { return n / 10 % 10; }

inline int GetHundreds(int n) { return n / 100 % 10; }

inline int pow3(int n) { return n * n * n; }
