#include <stdio.h>

int main(void) {
  int num1, num2, i;
  int sum = 0;

  printf("整数を二つ入力してください\n");
  scanf("%i %i", &num1, &num2);

  for (i = num1; i <= num2; i++) {
    sum += i;
  }

  printf("num1〜num2までの総和 = %i\n", sum);

  return 0;
}

