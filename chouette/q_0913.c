#include <stdio.h>

int main(void) {
  int N, X, i;
  int sumAl = 0;
  int dead = -1;

  scanf("%d %d", &N, &X);

  for (i = 1; i <= N; i++) {
      int V, P;

      scanf("%d %d", &V, &P);
      
      sumAl += V * P;
      if (sumAl > (X * 100) && dead == -1) {
          dead = i;
      }
  }

  printf("%d", dead);

  return 0;
}
