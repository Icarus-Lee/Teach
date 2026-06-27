#include <stdio.h>
int main() {
    int i;
    int n;
    int flag;
    for (n = 101; n <= 200; n++) {
        flag = 1;
        for (i = 2; i < 50; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            printf("n=%dΪ����\n", n);
        }
    }
    return 0;
}
