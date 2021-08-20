#include <stdio.h>

int main(void) {
  int num;

  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("0");
  } else if (num % 2 == 1) {
    printf("1");
  }
  
  return 0;
}