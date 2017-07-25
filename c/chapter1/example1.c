#include <stdio.h>

int a, b, c;
int product (int x, int y);
void main() {
  printf("enter a number between 1 and 100: ");
  scanf("%d", &a);
  printf("enter another number between 1 and 100: ");
  scanf("%d", &b);
  c = product(a, b);
  printf("%d * %d = %d\n", a, b, c);
}

int product(int x, int y) {
  return (x * y);
}
