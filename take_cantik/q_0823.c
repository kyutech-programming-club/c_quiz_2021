#include <stdio.h>

int main(void) {
  int num1, num2, i;
  int product = 1;

  printf("num1とnum2を入力(num1 < num2)\n");
  scanf("%i %i", &num1, &num2);

  for (i = num1; i <= num2; i++) {
    product *= i;
  }

  printf("%i\n", product);

  return 0;
}
