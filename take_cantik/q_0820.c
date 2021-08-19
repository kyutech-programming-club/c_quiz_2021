#include <stdio.h>

int main(void) {
  double r;
  printf("実数を入力してください\n");
  scanf("%lf", &r);

  printf("%lf\n", 4.0 / 3.0 * 3.14 * r * r * r);

  return 0;
}
