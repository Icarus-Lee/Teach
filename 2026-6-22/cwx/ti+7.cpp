#include <stdio.h>
int main() {
    int f[40] = {1, 1};
    int i;
    for (i = 2; 1 < 40; i++) {
        f[i] = f[i - 2] + f[i - 1];
        printf("��%d����: %d������\n", i + 1, f[i]);
    }
    return 0;
}
