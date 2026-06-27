#include <stdio.h>
int main() {
    int n       = 6;
    int value   = 1;
    int a[6][6] = {0};
    for (int k = 0; k < n / 2; k++) {
        for (int i = k; i < n - k; i++) {
            printf("%d ", value);
            a[k][i] = value++;
        }
        for (int i = k + 1; i < n - k; i++) {
            printf("%d ", value);
            a[n - 1 - k][i] = value++;
        }
        for (int i = n - 2 - k; i >= k; i--) {
            printf("%d ", value);
            a[n - 1 - k][i] = value++;
        }
        for (int i = n - 2 - k; i >= k + 1; i--) {
            printf("%d ", value);
            a[i][k] = value++;
        }
    }
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", a[i][j]);
        }
    }
    return 0;
}