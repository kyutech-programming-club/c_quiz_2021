#include <stdio.h>

int main(void) {
  int N, X;
  char S[200010];

  scanf("%i %i", &N, &X);
  scanf("%s", S);

  for (int i = 0; i < N; i++) {
    if (X != 0 && S[i] == 'x') {
      X--;
    } else if (S[i] == 'o') {
      X++;
    }
  }

  printf("%i\n", X);

  return 0;
}

