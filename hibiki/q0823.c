#include <stdio.h>

int main(void) {
  int num1, num2, sum=1, tmp;

  printf("Enter a start number: ");
  scanf("%d", &num1);
  printf("Enter a end number: ");
  scanf("%d", &num2);

  tmp = num1;

  for (int i = 0; i <= num2 - num1; i++) {
    sum *= tmp;
    tmp++;
  }

  printf("total sum is %d\n", sum);

  return 0;
}