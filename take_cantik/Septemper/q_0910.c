#include <stdio.h>

int main(void) {
  int A, B, C, D;
  scanf("%i %i %i %i", &A, &B, &C, &D);

  int ans = -1;
  int diff = C * D - B;
  if (diff > 0) {
    ans = (A + diff - 1) / diff;
  }

  printf("%i\n", ans);

  return 0;
}

