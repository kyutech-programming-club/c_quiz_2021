#include <stdio.h>

int power(int n, int m) {
  int res = 1;

  for (int i = 0; i < m; i++) {
    res *= n;
  }

  return res;
}

int is_equal(int n) {
  int ans = n*n * (n+1)*(n+1) * (2*n*n + 2*n - 1) / 12;

  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += power(i, 5);
  }
  
  return sum == ans;
}

int main(void) {
  printf("nの最大値入力してね: ");
  int n;
  scanf("%i", &n);

  for (int i = 1; i <= n; i++) {
    if (is_equal(n)) {
      printf("%i: success!\n", i);
    }
  }

  return 0;
}

