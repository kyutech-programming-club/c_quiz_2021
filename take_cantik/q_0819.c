#include <stdio.h>

int main(void) {
  int num1, num2;
  printf("整数を入力してください\n");
  scanf("%i", &num1);
  scanf("%i", &num2);

  if (num1 % num2 == 0) {
    printf("Y\n");
  } else {
    printf("N\n");
  }

  return 0;
}

