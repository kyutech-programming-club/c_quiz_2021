#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int my_rand(int n) {
  return random() % n;
}

int main(void) {
  printf("input: ");
  int num;
  scanf("%i", &num);

  srandom(getpid());
  printf("output: %i\n", my_rand(num));

  return 0;
}

