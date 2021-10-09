#include <stdio.h>

int power(int n, int m) {
  int num;
  num = n;

  for (int i = 1; i < m; i++) {
    n *= num;
  }
  return n;
}

int main(void) {
  int n, m;

  printf("Enter two numbers.\n");
  scanf("%d", &n);
  scanf("%d", &m);

  printf("A factorial is %d.\n", power(n, m));
}