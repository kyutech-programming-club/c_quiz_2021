#include <stdio.h>

int main(void) {
  int N;
  int X[110];

  scanf("%i", &N);
  for (int i = 0; i < N; i++) {
    scanf("%i", &X[i]);
  }

  int res = 1e9;
  for (int P = 1; P <= 101; P++) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
      sum += (X[i] - P) * (X[i] - P);
    }

    if (res > sum) {
      res = sum;
    }
  }

  printf("%i\n", res);

  return 0;
}

