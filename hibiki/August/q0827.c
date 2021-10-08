#include <stdio.h>

int main(void) {
  int num, checkprime, count=0;

  printf("Enter a number: ");
  scanf("%d", &num);

  for (int i = 2; i <= num; i++) {
    checkprime = 1;
    for (int j = 2; j < i; j++){
      if (i % j == 0) {
        checkprime = 0;
      }
    }

    if (checkprime) {
      count += 1;
    }
  }

  printf("the prime number is %d", count);

  return 0;
}
