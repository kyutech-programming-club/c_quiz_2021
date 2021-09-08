#include <stdio.h>

int digit_of(int n) {
  int res = 0;
  for (; n != 0;) {
    n /= 10;
    res++;
  }
  return res;
}

int power(int n, int m) {
  int res = 1;

  for (int i = 0; i < m; i++) {
    res *= n;
  }

  return res;
}

void interrupt_with_one(int *n) {
  int digit = digit_of(*n);
  *n *= power(10, digit);

  for (int i = 0; i < digit; i++) {
    *n += power(10, i);
  }
  for (int i = 2 * digit; i < 3 * digit; i++) {
    *n += power(10, i);
  }
}

int main(void) {
  printf("input: ");
  int num;
  scanf("%i", &num);

  interrupt_with_one(&num);

  printf("output: %i\n", num);

  return 0;
}

