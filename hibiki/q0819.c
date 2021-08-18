#include <stdio.h>

int main(void) {
  int i, j;

  scanf("%d%d", &i, &j);
  
  i % j == 0 ? printf("Y"): printf("N");

  return 0;
}