#include <stdio.h>

int main(void) {
  printf("整数を入力してください: ");

  int num, count, qty, large;
  scanf("%d", &num);

  switch (num) {
    case 1:
      large = 1;
      qty = 1;
      break;

    default:
      for (int i = 1; i <= num; i++) {
        count = 1;
        for (int j = 1; j <= i / 2; j++) {
          if (i % j == 0) {
            count++;
          }
        }

        if (count >= qty) {
          qty = count;
          large = i;
        }
      }
      break;
  }

  printf("約数の個数が最も多いのは%dの%d個です\n", large, qty);
  return 0;
}
