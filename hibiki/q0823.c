#include <stdio.h>

int main(void) {
  int num1, num2, product=1, tmp;

  printf("Enter a start number: ");
  scanf("%d", &num1);
  printf("Enter a end number: ");
  scanf("%d", &num2);

  for (int i = num1; i <= num2 - num1 + 1; i++) {
    product *= i;
  }

  printf("total sum is %d\n", product);

  return 0;
}
