#include <stdio.h>
#include <math.h>

int main(void) {
  long long N;
  scanf("%lld", &N);
  
  long long ans[1000000];
  int ans_len = 0;
  for (long long i = 1; i * i <= N; i++) {
    if (N % i == 0) {
      ans[ans_len++] = i;
      ans[ans_len++] = N / i;
    }
  }

  for (int i = 0; i < ans_len; i += 2) {
    printf("%lld\n", ans[i]);
  }
  if (ans[ans_len - 1] == ans[ans_len - 2]) {
    ans_len -= 3;
  } else {
    ans_len--;
  }
  for (int i = ans_len; i >= 1; i -= 2) {
    printf("%lld\n", ans[i]);
  }
  
  return 0;
}

