#include <stdio.h>
int main() {
    int n;
    int a;
    scanf("%d", &n);
    printf("%d=", n);
    int i;
    int flag;
    for (a = 2; a <= n; a++) {
        flag = 1;
        for (i = 2; i < a; i++) {
            if (a % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            while (n % a == 0) {
                printf("%d", a);
                n = n / a;
                if (n != 1) {
                    printf("*");
                }
            }
        }
    }
    return 0;
}
