#include <stdio.h>

int main(void) {
  printf("整数を入力してください: ");

  int num, count, i, j, is_prime;
  scanf("%d", &num);

  switch (num) {
    case 1:
      count = 0;
      break;

    case 2:
      count = 1;
      break;

    default:
      count = 1;
      for (i = 3; i <= num; i++) {
        is_prime = 1;

        for (j = 2; j < i; j++) {
          if (i % j == 0) {
            is_prime = 0;
            break;
          }
        }

        if (is_prime == 1) {
          count++;
        }
      }
      break;
  }


  printf("素数の数は%dです\n", count);

  return 0;
}
