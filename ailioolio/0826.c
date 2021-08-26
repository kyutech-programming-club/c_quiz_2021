#include <stdio.h>

int main(void) {
  printf("整数を入力してください: ");

  int num;
  scanf("%d", &num);

  int sum = 0;

  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      sum += i;
    }
  }

  printf("約数の総和は%dです\n", sum);

  return 0;
}
