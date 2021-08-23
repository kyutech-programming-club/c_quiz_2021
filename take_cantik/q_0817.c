#include <stdio.h>

int main(void) {
  int num;

  printf("整数を入力してください\n");
  scanf("%i", &num);
  printf("%i\n", num + 1);

  return 0;
}

