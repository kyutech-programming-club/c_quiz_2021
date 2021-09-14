#include <stdio.h>

int main(void) {
  int N, X, i;
  int sumAl = 0;
  int dead = -1;

  scanf("%d %d\n", &N, &X);

  for (i = 1; i < N; i++) {
      int V, P;

      scanf("%d %d\n", &V, &P);
      
      sumAl += V * (P * 0.01);
      if (sumAl > X && dead == -1) {
          dead = i;
      }
  }

  printf("%d", dead);

  return 0;
}
