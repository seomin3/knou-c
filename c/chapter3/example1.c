#include <stdio.h>

void main() {
  int a, b, c, result;
  a=10; b=20; c=30;
  result=-a*b/5+c%7;
  printf("result=-a*b/5+c%%7 수행후 result 값은 %d\n", result);
  result-=++a+b--;
  printf("result-=++a+b-- 수행후 result 값은 %d\n", result);
  result=(a&&b||c);
  printf("result=(a&&b||c) 수행후 result 값은 %d\n", result);
}
