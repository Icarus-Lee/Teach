#include <stdio.h>

int main() {
    int a;
    a = 'a' + 3.3;
    printf("Value of a: %d\n", a);
    printf("Type of result: %s\n", (sizeof('a' + 3.3) == sizeof(double)) ? "double" : "unknown");
    return 0;
}