#include <stdio.h>

int main(void) {
  int num1, num2, sum=0;

  printf("Enter a start number: ");
  scanf("%d", &num1);
  printf("Enter a end number: ");
  scanf("%d", &num2);

  for (int i = num1; i <= num2; i++) {
    sum += i;
  }

  printf("total sum is %d\n", sum);

  return 0;
}
