#include <stdio.h>

int min(int a, int b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main(void) {
  int A, B, W;
  scanf("%i %i %i", &A, &B, &W);

  int minimum = 1e9;
  int maximum = 0;

  int Wg = 1000 * W;
  for (int i = 1; i <= 1000000; i++) {
    if (A * i <= Wg && B * i >= Wg) {
      minimum = min(minimum, i);
      maximum = max(maximum, i);
    }
  }

  if (maximum == 0) {
    printf("UNSATISFIABLE\n");
  } else {
    printf("%i %i\n", minimum, maximum);
  }

  return 0;
}

