#include <stdio.h>

int max(int a , int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main(void) {
  int N;
  int A[200010];

  scanf("%i", &N);
  for (int i = 0; i < N; i++) {
    scanf("%i", &A[i]);
  }

  long long ans = 0;
  int max_num = 0;

  for (int i = 0; i < N; i++) {
    max_num = max(max_num, A[i]);
    ans += max_num - A[i];
  }

  printf("%lli\n", ans);
  
  return 0;
}

