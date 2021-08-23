#include <stdio.h>

int main(void)
{
  int num, i, rem;

  printf("整数を入力してください:");
  scanf("%d", &num);

  int sum = 0;

  for (i = num; i > 0; i /= 10)
  {
    rem = i % 10;
    sum += rem;
  }

  printf("各桁の和は%dです。\n", sum);

  return 0;
}
