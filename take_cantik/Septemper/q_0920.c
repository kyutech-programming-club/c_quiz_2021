#include <stdio.h>

int main(void) {
  int N;
  int V[25], C[25];

  scanf("%i", &N);
  for (int i = 0; i < N; i++) {
    scanf("%i", &V[i]);
  }
  for (int i = 0; i < N; i++) {
    scanf("%i", &C[i]);
  }

  int res = 0;
  for (int i = 0; i < N; i++) {
    int diff = V[i] - C[i];
    if (diff > 0) {
      res += diff;
    }
  }

  printf("%i\n", res);

  return 0;
}

