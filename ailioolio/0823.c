#include <stdio.h>
int main(void)
{

  int num1, num2, i;
  int product = 1;
  printf("整数を二つ入力(num1 < num2)\n");
  scanf("%d %d", &num1, &num2);

  for (i = num1; i <= num2; i++)
  {
    product *= i;
  }

  printf("num1からnum2までの積は%dです。\n", product);

  return 0;
}
