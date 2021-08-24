#include <stdio.h>

int main(void) {
  int num, i;
  int sum = 0;

  scanf("%i", &num);

  for (i = num; i > 0; i /= 10) {
    sum += i % 10;
  }

  printf("%i\n", sum);

  return 0;
}

