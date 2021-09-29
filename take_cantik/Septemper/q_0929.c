#include <stdio.h>

int main(void) {
  long long N;
  scanf("%lli", &N);

  char S[125];
  int i;
  for (i = 0; N > 0; i++) {
    if (N % 2) {
      S[i] = 'A';
      N--;
    } else {
      S[i] = 'B';
      N /= 2;
    }
  }

  for (int j = i - 1; j >= 0; j--) {
    printf("%c", S[j]);
  }
  printf("\n");

  return 0;
}

