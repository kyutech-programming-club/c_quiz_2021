#include <stdio.h>

int main(void) {
  int N, X;
  char S[200010];

  scanf("%i %i", &N, &X);
  scanf("%s", S);

  for (int i = 0; i < N; i++) {
    if (S[i] == 'o') {
      X++;
    } else if (X) {
      X--;
    }
  }

  printf("%i\n", X);

  return 0;
}

