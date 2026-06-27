// #include <stdio.h>

// void swap(int*, int*);

// int main() {
//     int x, y, z, t;
//     printf("\n请输入三个数字:\n");
//     scanf("%d%d%d", &x, &y, &z);

//     if (x > y) {
//         /*交换x,y的值*/
//         swap(&x, &y);
//     }

//     if (x > z) {
//         /*交换x,z的值*/
//         swap(&x, &z);
//     }

//     if (y > z) {
//         /*交换z,y的值*/
//         swap(&y, &z);
//     }

//     printf("从小到大排序: %d %d %d\n", x, y, z);
// }

// inline void swap(int* a, int* b) {
//     int tmp = *a;
//     *a      = *b;
//     *b      = tmp;
// }

#include <stdio.h>
void swap1(int a, int b) {
    int t;
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
}
void swap2(int a, int b, int c) {
    if (a > b) {
        swap1(a, b);
    }
    if (a > c) {
        swap1(a, c);
    }
    if (b > c) {
        swap1(b, c);
    }
}
void exchange(int a, int b, int c) { swap2(a, b, c); }
int  main() {
    int x, y, z;
    scanf("%d,%d,%d", &x, &y, &z);
    exchange(x, y, z);
    printf("%d,%d,%d\n", x, y, z);
    return 0;
}