#include <stdio.h>

#define FREEZING_PT 32.0
#define SCALE_FACTOR (5.0/9.0)

void main() {
  float fahrenheit, celsius;
  printf("enter fahrenheit temperature: ");
  scanf("%f", &fahrenheit);
  celsius=(fahrenheit-FREEZING_PT)*SCALE_FACTOR;
  printf("celsius equivalent: %.1f\n", celsius);
}
