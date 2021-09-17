#include <stdio.h>

int gcd(int x, int y) {
  if (x % y == 0) {
    return y;
  }
  return gcd(y, x % y);
}

int main(void) {
  int K;
  scanf("%i", &K);

  int sum = 0;
  for (int i = 1; i <= K; i++) {
    for (int j = 1; j <= K; j++) {
      for (int k = 1; k <= K; k++) {
        sum += gcd(gcd(i, j), k);
      }
    }
  }

  printf("%i\n", sum);

  return 0;
}

