#include <stdio.h>

void main() {
  int i=873;
  float f=123.94536;
  char s[]="Happy birthday";
  printf("정수형 자료의 출력\n");
  printf("\t%04d\n\t%09d\n\n", i, i);
  printf("실수형 자료의 출력\n");
  printf("\t%.3f\n\t%.3e\n\t\n", f, f);
  printf("문자열 자료의 출력\n");
  printf("\t%11s\n", s);
}
