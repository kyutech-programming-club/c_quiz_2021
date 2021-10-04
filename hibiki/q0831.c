#include <stdio.h>

int main(void) {
  int x1, x2, x3, y1, y2, y3, innerPro;

  printf("Enter two vector with three dimensions: ");
  scanf("%d %d %d %d %d %d", &x1, &x2, &x3, &y1, &y2, &y3);

  innerPro = x1*y1 + x2*y2 + x3*y3;

  printf("Inner product is %d\n", innerPro);
  return 0;
}
