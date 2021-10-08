#include <stdio.h>

int main(void) {
  int num, renum, a, b, c;

  printf("Enter a number: ");
  scanf("%d", &num);

  a = num / 100;
  num %= 100;
  b = num / 10;
  num %= 10;
  c = num;
  renum = a + b * 10 + c * 100;
  printf("return number is %d\n", renum);
  return 0;
}
