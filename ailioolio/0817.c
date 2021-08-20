#include <stdio.h>

int main(void)
{

  printf("キーボードで入力（整数）+１");

  int d, sum;
  scanf("%d", &d);
  sum = d + 1;
  printf("%d\n", sum);
  return 0;
}
