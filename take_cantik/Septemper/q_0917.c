#include <stdio.h>

int min(int a, int b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

int main(void) {
  int K, N;
  int A[200010];
  scanf("%i %i", &K, &N);
  for (int i = 0; i < N; i++) {
    scanf("%i", &A[i]);
  }

  int ans = A[N - 1] - A[0];
  for (int i = 1; i < N; i++) {
    int distance = K - A[i] + A[i - 1];
    ans = min(ans, distance);
  }

  printf("%i\n", ans);

  return 0;
}

