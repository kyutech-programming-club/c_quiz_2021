#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846264338

int main(void) {
  int A, B, H, M;
  scanf("%i %i %i %i", &A, &B, &H, &M);

  double deg_H = H * 30 + M * 0.5;
  double deg_M = M * 6;
  double deg = deg_H - deg_M;

  if (deg > 180) {
    deg = 360 - deg;
  }

  double radian = deg * PI / 180;

  double ans = A * A + B * B - 2 * A * B * cos(radian);

  printf("%.15f\n", sqrt(ans));

  return 0;
}

