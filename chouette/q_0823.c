#include <stdio.h>

int main(void) {
  int num1, num2, i;

  scanf("%d %d", &num1, &num2);
  
  int product = 1;
  for (i = num1; i <= num2; i++) {
    product *= i;
  }

  printf("%d\n", product);

  return 0;
}
