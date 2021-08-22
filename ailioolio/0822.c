#include <stdio.h>

int main(void)
{
  int num1, num2;
  printf("総和を求める（num%d < num%d)\n", 1, 2);
  printf("num%d: ", 1);
  scanf("%d", &num1);
  printf("num%d: ", 2);
  scanf("%d", &num2);

  if (num1 < num2)
  {
    int sum = (num1 + num2) * (num2 - num1 + 1) / 2;
    printf("総和は%dです。\n", sum);
  }
  else
  {
    printf("error\n");
  }

  return 0;
}
