#include <stdio.h>

int main() {
    int a = 1, b = 1, c = 1;
    ++a || ++b && ++c;
    printf("a = %d, b = %d, c = %d", a, b, c);
    return 0;
}
