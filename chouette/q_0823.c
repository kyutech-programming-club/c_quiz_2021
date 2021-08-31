#include <stdio.h>

int main(void) {
  int num1, num2, i;

  scanf("%d %d", &num1, &num2);
  
  int sum = 1;
  for (i = num1 ; i <= num2; i++) {
    sum *= i;
  }

  printf("%d\n", sum);

  return 0;
}