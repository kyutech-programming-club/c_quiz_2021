#include <stdio.h>

int main(void) {
  int N, X;
  scanf("%i %i", &N, &X);
  int V[1010];
  int P[1010];
  for (int i = 0; i < N; i++) {
    scanf("%i %i", &V[i], &P[i]);
  }

  int res = -1;
  int sum = 0;
  for (int i = 0; i < N; i++) {
    sum += V[i] * P[i];

    if (X * 100 < sum) {
      res = i + 1;
      break;
    }
  }

  printf("%i\n", res);

  return 0;
}

