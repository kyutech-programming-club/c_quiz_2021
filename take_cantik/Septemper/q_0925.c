#include <stdio.h>

void scanVec(int Vec[100010], int N) {
  for (int i = 0; i < N; i++) {
    scanf("%i", &Vec[i]);
    Vec[i] -= 1;
  }
}

int main(void) {
  int N;
  int A[100010], B[100010], C[100010];

  scanf("%i", &N);
  scanVec(A, N);
  scanVec(B, N);
  scanVec(C, N);

  int count[100010] = {};
  for (int i = 0; i < N; i++) {
    count[B[C[i]]] += 1;
  }
  long long ans = 0;
  for (int i = 0; i < N; i++) {
    ans += count[A[i]];
  }
  
  printf("%lld\n", ans);

  return 0;
}

