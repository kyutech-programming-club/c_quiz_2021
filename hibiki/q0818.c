#include <stdio.h>

int main(void) {
  int num;
  scanf("%d",&num);

  num % 2 == 0 ? printf("%d\n", 0) : printf("%d\n", 1);
  
  return 0;
}
