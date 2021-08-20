#include <stdio.h>

int main(void) {
  double num;

  scanf("%lf", &num);
  
  double volume = (4 * 3.14 * num * num * num) / 3;  
  printf("%f\n", volume);

  return 0;
}