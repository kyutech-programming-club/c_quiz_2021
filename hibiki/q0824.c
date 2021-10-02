#include <stdio.h>

int main(void) {
  int num, sum=0;

  printf("Enter a number: ");
  scanf("%d", &num);

  for (int i = num; i > 0; i /= 10) {
    sum += i % 10;
  }

  printf("total of each places is %d\n", sum);

  return 0;
}
