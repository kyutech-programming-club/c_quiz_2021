#include <stdio.h>

int main(void) {
  int num;
  int cnt_max = 0;
  int cnt = 0;
  int max;
  int i, j;

  printf("整数を入力してください: ");
  scanf("%i", &num);

  for (i = 1; i <= num; i++) {
    cnt = 0;

    for (j = 1; j <= i; j++) {
      if (i % j == 0) {
        cnt++;
      }
    }

    if (cnt >= cnt_max) {
      cnt_max = cnt;
      max = i;
    }
  }

  printf("%i以下の整数のうち最も約数の多い数は%iです。\n", num, max);

  return 0;
}

