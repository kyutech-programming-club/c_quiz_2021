#include <stdio.h>

int main(void) {
  int num, is_prime;
  int cnt = 0;
  int i, j;

  printf("整数を入力してください: ");
  scanf("%i", &num);

  if (num == 1) {
    ;
  } else if (num == 2) {
    cnt = 1;
  } else {
    cnt = 1;

    for (i = 3; i <= num; i++) {
      is_prime = 1;

      for (j = 2; j < i; j++) {
        if (i % j == 0) {
          is_prime = 0;
          break;
        }
      }

      if (is_prime) {
        cnt++;
      }
    }
  }

  printf("%i以下の素数の数は%i個です。\n", num, cnt);

  return 0;
}
