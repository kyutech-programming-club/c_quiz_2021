#include <stdio.h>

int main(void) {
  printf("整数を入力してください: ");

  int num;
  scanf("%d", &num);

  int count = 0;
  for (int i = 1; i <= num; i++) {
    int sum = 1;

    for (int j = 1; j < i; j++) {
      if (i % j == 0) {
        sum++;
      }
    }

    if (sum == 2) {
      count++;
    }
  }

  printf("素数の数は%dです\n", count);
}
