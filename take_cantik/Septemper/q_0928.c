#include <stdio.h>

int main(void) {
  int N;
  scanf("%i", &N);

  int A[100010];
  for (int i = 0; i < N; i++) {
    scanf("%i", &A[i]);
  }

  long long X;
  scanf("%lli", &X);

  long long A_sum = 0;
  for (int i = 0; i < N; i++) {
    A_sum += A[i];
  }
  
  long long p = X / A_sum;
  long long sum = p * A_sum;
  long long ans = p * N;

  for (int i = 0; i < N; i++) {
    sum += A[i];
    ans++;
    if (sum > X) {
      break;
    }
  }
  
  printf("%lli\n", ans);

  return 0;
}

