#include <stdio.h>

int main(void) {
  printf("整数を入力してください: ");

  int num, count;
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
      for (int i = 3; i <= num; i++) {
        int sum = 2;

        for (int j = 2; j < i; j++) {
          if (i % j == 0) {
            sum++;
            break;
          }
        }

        if (sum == 2) {
          count++;
        }
      }
      break;
  }


  printf("素数の数は%dです\n", count);

  return 0;
}
