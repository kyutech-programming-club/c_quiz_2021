#include <stdio.h>

int main(void)
{
  int num1, num2;
  printf("総和を求める（num1 < num2)\n");
  printf("num1: ");
  scanf("%d", &num1);
  printf("num2: ");
  scanf("%d", &num2);

  int sum = 0;
  for (num1; num1 <= num2; num1++)
  {
    sum += num1;
  }
  printf("%d\n", sum);
  return 0;
}
