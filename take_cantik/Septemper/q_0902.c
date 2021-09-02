#include <stdio.h>

int power(int n, int m) {
  int res = 1;

  for (int i = 0; i < m; i++) {
    res *= n;
  }

  return res;
}

int main(void) {
  printf("input: n m\n");
  int n, m;
  scanf("%i %i", &n, &m);

  printf("n ^ m = %i\n", power(n, m));

  return 0;
}

