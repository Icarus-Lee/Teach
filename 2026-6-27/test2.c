#include <stdio.h>

int main() {
  int a, b, c;
  c = (b = (a = 5 * 9, a / 3), a - 1);
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  return 0;
}