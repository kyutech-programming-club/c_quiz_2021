#include <stdio.h>

int main(void) {
  printf("整数を入力してください: ");

  int num;
  scanf("%d", &num);

  int i = num;
  int reverse = 0;

  while (i > 0) {
    reverse = reverse * 10 + i % 10;
  i = i / 10;
  }

  printf("桁を入れ替えた数は%dです\n", reverse);

  return 0;
}
