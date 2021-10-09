#include <stdio.h>

int power(int n, int m) {
  int facNum;
  facNum = n;

  for (int i = 1; i < m; i++) {
    facNum *= n;
  }
  return facNum;
}

int main(void) {
  int n, sum=0, formula;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    sum += power(i, 5);
  }

  formula = n*n * (n+1)*(n+1) * (2*n*n + 2*n - 1) /12;

  printf("sum = %d: formula = %d\n", sum, formula);

  if (formula == sum) {
    printf("The formula is correct.\n");
  }

  return 0;
}
