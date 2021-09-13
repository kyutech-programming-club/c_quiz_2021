#include <stdio.h>

int main(void) {
  int N, i;
  double X;
  double sumAl = 0;
  int dead = -1;

  scanf("%d %lf\n", &N, &X);

  for (i = 1; i < N; i++) {
      double V, P;

      scanf("%lf %lf\n", &V, &P);
      
      sumAl += V * (P * 0.01);
      if (sumAl > X && dead == -1) {
          dead = i;
      }
  }

  printf("%d", dead);

  return 0;
}