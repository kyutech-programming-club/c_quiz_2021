#include <stdio.h>

int main(void) {
  int num, i;
  int sum = 0;

  printf("整数を入力してください: ");
  scanf("%i", &num);

  for (i = 1; i <= num; i++) {
    if (num % i == 0) {
      sum += i;
    }
  }

  printf("sum = %i\n", sum);

  return 0;
}

