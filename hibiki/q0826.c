#include <stdio.h>

int main(void) {
  int num, sum=0;

  printf("Enter a number : ");
  scanf("%d", &num);

  for (int i = 1 ; i <= num; i++) {
    if (num % i == 0) {
      sum += i;
    }
  }

  printf("sum of divisors is %d\n", sum);
  return 0;
}
